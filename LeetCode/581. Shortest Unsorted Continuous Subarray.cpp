class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> v1(nums.begin(), nums.end());

            sort(v1.begin(),v1.end()));
            int min = 0, max = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (v1[i] == nums[i])
                {
                    continue;
                }
                else
                {
                    min = max;
                    max = i;
                }
            }
            return max - min;
    }
};