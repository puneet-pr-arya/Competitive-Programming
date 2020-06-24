class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {

        unordered_set<string> mySet;

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                char current_val = board[i][j];
                if (current_val != '.')
                {

                    if (mySet.find(convert(current_val) + "found in row" + to_string(i)) != mySet.end() or
                        mySet.find(convert(current_val) + "found in col" + to_string(j)) != mySet.end() or
                        mySet.find(convert(current_val) + "found in sub box" + to_string(i / 3) + "-" + to_string(j / 3)) != mySet.end())
                    {
                        return false;
                    }

                    mySet.insert(convert(current_val) + "found in row" + to_string(i));
                    mySet.insert(convert(current_val) + "found in col" + to_string(j));
                    mySet.insert(convert(current_val) + "found in sub box" + to_string(i / 3) + "-" + to_string(j / 3));
                }
            }
        }

        return true;
    }

    string convert(char x)
    {
        string s(1, x);
        //yeh iska constructor hai sidha hi initialize ho jayega asia karne se nahi to pehele declare karo phir isko value do kotlin jaisa scen e nahi hai
        return s;
    }
};