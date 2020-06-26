class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int j;

        vector<int> v1;
        for (int i = 0; i < nums.size(); i++)
        {
            j = abs(nums[i]) - 1;
            if (nums[j] < 0)
                v1.push_back(abs(nums[i]));
            else
            {
                nums[j] = -(nums[j]);
            }
        }
        return v1;
    }
};

// class Solution
// {
// public:
//     vector<int> findDuplicates(vector<int> &nums)
//     {
//         unordered_map<int, int> m1;
//         vector<int> v1;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (m1.count(nums[i]))
//                 v1.push_back(nums[i]);
//             else
//             {
//                 m1[nums[i]]++;
//             }
//         }
//         return v1;
//     }
// };