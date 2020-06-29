//Solve with 2 pointer approach next time

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int closestTarget = nums[0] + nums[1] + nums[nums.size() - 1];
        for (int i = 0; i < nums.size() - 2; i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (abs(closestTarget - target) > abs(target - (nums[i] + nums[j] + nums[k])))
                    {
                        closestTarget = nums[i] + nums[j] + nums[k];
                    }
                }
            }
        }
        return closestTarget;
    }
};