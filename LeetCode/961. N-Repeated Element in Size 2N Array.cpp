class Solution
{
public:
    int repeatedNTimes(vector<int> &A)
    {
        sort(A.begin(), A.end());
        if (A[(A.size() / 2)] == A[(A.size() / 2) - 1])
        {
            return A[(A.size() / 2)];
        }
        else if (A[(A.size() / 2) - 1] == A[(A.size() / 2) - 2])
        {
            return A[(A.size() / 2) - 1];
        }
        else
        {
            return A[(A.size() / 2)];
        }
    }
};