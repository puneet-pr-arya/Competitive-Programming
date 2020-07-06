class Solution
{
public:
    vector<int> sortedSquares(vector<int> &A)
    {
        vector<int> g1(A.size(), 0);
        for (int i = 0; i < A.size(); i++)
        {
            g1[i] = A[i] * A[i];
        }
        sort(g1.begin(), g1.end());
        return g1;
    }
};