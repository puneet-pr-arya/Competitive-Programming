class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            result ^= nums[i];
        }
        return result;
    }
};

// class Solution
// {
// public:
//     int singleNumber(vector<int> &nums)
//     {
//         if (nums.size() == 1)
//         {
//             return nums[0];
//         }
//         unordered_map<int, int> g1;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             g1[nums[i]]++;
//         }
//         unordered_map<int, int>::iterator p;
//         for (p = g1.begin(); p != g1.end(); p++)
//             if (p->second == 1)
//             {
//                 return p->first;
//             }
//         return -1;
//     }
// };