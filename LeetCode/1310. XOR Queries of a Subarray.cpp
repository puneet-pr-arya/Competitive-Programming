class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> g1(arr.size(), 0);
        vector<int> g2;
        g1[0] = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            g1[i] = g1[i - 1] ^ arr[i];
        }

        for (int i = 0; i < queries.size(); i++)
        {
            int a = queries[i][0];
            int b = queries[i][1];

            if (a == 0)
            {
                g2.push_back(g1[b]);
            }
            else
            {
                g2.push_back(g1[b] ^ g1[a - 1]);
            }
        }
        return g2;
    }
};