class Solution
{
public:
    int countSegments(string s)
    {
        stringstream st(s);
        string sa;
        int count = 0;
        while (st >> sa)
        {
            count++;
        }

        return count;
    }
};