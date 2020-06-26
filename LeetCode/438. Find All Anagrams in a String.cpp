class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int anchor;
        char arr[26];
        vector<int> v1;
        if (s.size() == 0 || s == null)
            return v1(1, 0);

        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a'] = s[i];
        }

        if ()
    }
};