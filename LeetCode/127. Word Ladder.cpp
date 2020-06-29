class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> s;
        for (int i = 0; i < wordList.size(); i++)
        {
            s.insert(wordList[i]);
        }
        if (!s.count(endWord))
            return 0;
        queue<string> g;
        g.push(beginWord);
        int level = 1;
        while (!g.empty())
        {
            int size = g.size();
            for (int i = 0; i < size; i++)
            {
                string current_word = g.front();
                g.pop();
                for (int j = 0; j < current_word.size(); j++)
                {
                    string original_word;
                    original_word = current_word;
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        if (current_word[j] == c)
                            continue;
                        current_word[j] = c;
                        string newWord = current_word;
                        if (newWord == endWord)
                            return level + 1;
                        if (s.count(newWord))
                        {
                            g.push(newWord);
                            s.erase(newWord);
                        }
                    }
                    current_word = original_word;
                }
            }
            level++;
        }
        return 0;
    }
};