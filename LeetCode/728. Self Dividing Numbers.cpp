class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> result;
        for (int i = left; i <= right; i++)
        {
            if (isSelfDividing(i))
            {
                result.push_back(i);
            }
        }
        return result;
    }
    bool isSelfDividing(int digit)
    {
        int localDigit = digit;
        int lastDigit = 0;
        while (digit)
        {
            lastDigit = digit % 10;

            if (localDigit % lastDigit != 0 || lastDigit == 0)
            {
                return false;
            }

            digit = digit / 10;
        }

        return true;
    }
};