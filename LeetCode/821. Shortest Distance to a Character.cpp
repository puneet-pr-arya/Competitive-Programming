class Solution
{
public:
    vector<int> shortestToChar(string S, char C)
    {

        vector<int> result;
        int posi = (S.size());
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == C)
            {
                posi = i;
            }
            result.push_back(i - posi);
        }
        for (int i = S.size() - 1; i >= 0; i--)
        {
            if (S[i] == C)
            {
                posi = i;
            }
            int posiNext = i - posi;
            int a = min(abs(result[i]), abs(posiNext));
            result[i] = a;
        }
        return result;
    }
};