class Solution
{
public:
    string toLowerCase(string str)
    {
        int difference = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (('A' <= str[i] && str[i] <= 'Z'))
            {
                difference = str[i] - 'A';
                str[i] = 'a' + difference;
            }
        }
        return str;
    }
};