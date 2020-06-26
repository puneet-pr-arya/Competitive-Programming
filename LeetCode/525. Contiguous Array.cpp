class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        unordered_map<int, int> m1;
        m1[0] = -1;
        int max_length = 0;
        int counti = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                counti += -1;
            else
                counti += 1;

            if (m1.count(counti))
            {
                max_length = max(max_length, i - m1[counti]);
            }
            else
            {
                m1[counti] = i;
            }
        }
        return max_length;
    }
};