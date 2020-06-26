class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            int midpoint = left + (right - left) / 2;
            if (midpoint > 0 && nums[midpoint] < nums[midpoint - 1])
            {
                return nums[midpoint];
            }
            if (nums[left] <= nums[midpoint] && nums[midpoint] > nums[right])
            {
                left = midpoint + 1;
            }
            else
            {
                right = midpoint - 1;
            }
        }
        return nums[left];
    };
};