class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> v1;
        string ss = "";
        backtrack(v1, ss, 0, 0, n);
        return v1;
    }
    void backtrack(vector<string> &v, string ss, int open, int close, int max)
    {
        if (ss.length() == max * 2)
        {
            v.push_back(ss);
        }
        if (open < max)
        {
            backtrack(v, ss + "(", open + 1, close, max);
        }
        if (close < open)
        //yahan pe open ko max kardo sare possible combinations ban jayenge
        {
            backtrack(v, ss + ")", open, close + 1, max);
        }
    }
};