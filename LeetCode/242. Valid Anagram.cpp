class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() == 0 && t.size() == 0)
        {
            return true;
        }
        else if (s.size() != t.size())
        {
            return false;
        }

        unordered_map<char, int> m1;

        for (int i = 0; i < s.size(); i++)
        {
            m1[s[i]]++;
            m1[t[i]]--;
        }
        for (auto &it : m1)
        {
            if (it.second != false)
                return false;
        }
        return true;
    };
};