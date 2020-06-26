class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long long max, max2, max3;
        max = max2 = max3 = LLONG_MIN;
        unordered_map<int, int> m1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (m1.count(nums[i]))
            {
                continue;
            }

            else
            {
                m1[nums[i]]++;

                if (nums[i] > max)
                {
                    max3 = max2;
                    max2 = max;
                    max = nums[i];
                }
                else if (nums[i] > max2)
                {
                    max3 = max2;
                    max2 = nums[i];
                }
                else if (nums[i] > max3)
                {
                    max3 = nums[i];
                }
            }
        }

        if (max3 == LLONG_MIN)
        {
            return max;
        }

        return max3;
    }
};