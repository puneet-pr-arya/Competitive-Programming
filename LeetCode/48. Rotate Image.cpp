class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int swap;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i; j < matrix.size(); j++)
            { //j ko i ke equal isliye taki hum vapis se swap kar denge aur kuch baat nahi rahegi
                swap = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = swap;
            }
        }
        int anchor;
        int swap2;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix.size() / 2; j++)
            {
                swap2 = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size() - 1 - j];
                matrix[i][matrix.size() - 1 - j] = swap2;
            }
        }
    }
};