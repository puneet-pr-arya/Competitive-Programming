class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        vector<int> num(nums.size() + 1, 0);

        num[0] = 0;
        num[1] = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            num[i + 1] = max(num[i], num[i - 1] + nums[i]);
        }
        return num[nums.size()];
    }
};