class Solution
{
public:
    vector<int> countBits(int num)
    {
        vector<int> g1;
        for (int i = 0; i <= num; i++)
        {
            g1.push_back(returnBits(i));
        }
        return g1;
    }
    int returnBits(int num)
    {
        int count = 0;
        while (num)
        {
            count++;
            num = num & (num - 1);
        }
        return num;
    }
};