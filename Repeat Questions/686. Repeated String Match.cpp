//Not working rn
class Solution
{
public:
    int repeatedStringMatch(string A, string B)
    {
        int sumTotalA = 0;
        int sumTotalB = 0;
        for (int i = 0; i <= A.size(); i++)
        {
            sumTotalA += A[i];
        }
        for (int i = 0; i <= B.size(); i++)
        {
            sumTotalB += B[i];
        }

        int sumation = sumTotalB / sumTotalA;

        if (A[0] == B[0] && sumation > 0)
        {
            return sumation;
        }
        else if (sumation > 0)
        {
            return sumation + 1;
        }
        else
        {
            return 1;
        }
    }
};