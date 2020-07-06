class Solution
{
public:
    int smallestRangeI(vector<int> &A, int K)
    {
        sort(A.begin(), A.end());

        if ((A[A.size() - 1] - K) - (A[0] + K) < 0)
        {
            return 0;
        }

        return (A[A.size() - 1] - K) - (A[0] + K);
    }
};