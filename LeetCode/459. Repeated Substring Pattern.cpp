class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        string s1, s3;
        int ssize = s.size();
        for (int i = 1; i <= ssize / 2; i++)
        {
            if (ssize % i == 0)
            {
                string subtr = repeat(s.substr(0, i), ssize / i);
                if (subtr == s)
                {
                    return true;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }

        return false;
    }

    string repeat(string s2, int n)
    {

        string s1 = s2;

        for (int i = 1; i < n; i++)
            s2 += s1;

        return s2;
    }
};
