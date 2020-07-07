class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int count = 0;
        if (n == 0 || n < 0)
            return false;
        while (count == 0)
        {
            count++;
            n = n & (n - 1);
        }
        if (n)
            return false;

        return true;
    }
};