class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &A)
    {
        vector<int> g1(A.size(), 0);
        int start = 0;
        int end = 1;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 != 0)
            {
                g1[end] = A[i];
                end = end + 2;
            }
            else
            {

                g1[start] = A[i];
                start = start + 2;
            }
        }
        return g1;
    }
};