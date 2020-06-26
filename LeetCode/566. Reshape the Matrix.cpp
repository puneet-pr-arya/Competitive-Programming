class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        vector<vector<int>> nums1(r, vector<int>(c, 0));

        int ra = nums.size();
        int col = nums[0].size();

        int column = 0;
        int row = 0;

        if (r * c != col * ra)
            return nums;

        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < col; j++)
            {
                nums1[row][column] = nums[i][j];
                column++;
                if (column == c)
                {
                    column = 0;
                    row++;
                }
            }
        }
        return nums1;
    }
};