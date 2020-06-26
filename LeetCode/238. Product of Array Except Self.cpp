class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int len = nums.size() - 1;
        if (len == 0)
            return nums;
        vector<int> nums1(len + 1, 0), nums2(len + 1, 0), nums3(len + 1, 0);

        nums1[0] = 1;
        nums2[len] = 1;

        for (int i = 1; i < len + 1; i++)
        {
            nums1[i] = nums1[i - 1] * nums[i - 1];
        }

        for (int i = len - 1; i >= 0; i--)
        {
            nums2[i] = nums2[i + 1] * nums[i + 1];
        }

        for (int i = 0; i <= len; i++)
        {
            nums3[i] = nums1[i] * nums2[i];
        }
        return nums3;
    }
};