class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        int size = A.size();
        vector<int> res(size, 0);
        int start = 0, end = size - 1;
        for (int i = 0; i < size; i++)
        {
            if (A[i] % 2 == 1)
            {
                res[end] = A[i];
                end--;
            }
            else
            {
                res[start] = A[i];
                start++;
            }
        }
        return res;
        // vector<int> sortArrayByParity(vector<int> &A)
        // {
        //     vector<int> g1;
        //     for (int i = 0; i < A.size(); i++)
        //     {
        //         if (A[i] % 2 == 0)
        //         {
        //             g1.push_back(A[i]);
        //         }
        //     }
        //     for (int i = 0; i < A.size(); i++)
        //     {
        //         if (A[i] % 2 != 0)
        //         {
        //             g1.push_back(A[i]);
        //         }
        //     }
        //     return g1;
        // }
    };