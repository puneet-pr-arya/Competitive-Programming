class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int anchor = 0, result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] < nums[i + 1])
            {
                anchor = i;
            }
            result = max(anchor, i - anchor + 1);
        }
    };