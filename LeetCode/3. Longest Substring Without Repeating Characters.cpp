class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, int> hp;
        int maxLen = 0;
        int i = 0, j = 0;

        while (i < s.length())
        {
            char ch = s[i];

            if (hp.count(ch))
            {
                j = i;
            }

            hp[ch] = i;

            int currLen = i - j + 1;
            maxLen = max(maxLen, currLen);
            i++;
        }

        return maxLen;
    }
};