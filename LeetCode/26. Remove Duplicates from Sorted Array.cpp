class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        //Two pointer approach
        int element = INT_MIN;

        for (auto it = nums.begin(); it != nums.end();)
        {
            if (*it == element)
            {
                nums.erase(it);
                        }
            else
            {
                element = *it;
                it++;
            }
        }

        return nums.size();
    }
};