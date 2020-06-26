class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &interval)
    {
        int n = interval.size();
        if (n <= 1)
            return interval;
        //vector mein sorting kafi simple hai lexiographically check hota hai always jo first element hai
        sort(interval.begin(), interval.end());
        vector<vector<int>> result;
        result.push_back(interval[0]);

        for (int i = 1; i < n; i++)
        {
            if (result.back()[1] >= interval[i][0])
            {
                //basically last elemeent ka last point ko check kiya with the first one agar uski value jyafda hai to maine max le liya last element ke aur new vale ke dusre ka . jo max hua vo hi last range
                //Now yahan se meri changes in the return vali vector ki problem solve ho gayi
                //kyunki last element hi check karne vala hoga
                result.back()[1] = max(result.back()[1], interval[i][1]);
            }
            else
            {
                result.push_back(interval[i]);
            }
        }
        return result;
    }
};