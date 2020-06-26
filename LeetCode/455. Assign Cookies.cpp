class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int a = 0, b = 0;
        while (a < g.size() && b < s.size())
        {
            if (g[a] <= s[b])
            {
                a++;
                b++;
            }
            else
            {
                b++;
            }
        }
        return a;
    }
};