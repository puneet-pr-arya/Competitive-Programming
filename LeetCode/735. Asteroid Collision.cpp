class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> g1;
        g1.push_back(asteroids[0]);
        for (int i = 1; i < asteroids.size(); i++)
        {
            if (g1.back() * asteroids[i] > 0)
            {
                g1.push_back(asteroids[i]);
            }
            else
            {
                if (g1.back() > 0 && asteroids[i] < 0)
                {

                    if (g1.back() <= abs(asteroids[i]))
                    {
                        if (g1.back() == abs(asteroids[i]))
                        {
                            g1.pop_back();
                        }
                        g1.pop_back();
                        g1.push_back(asteroids[i]);
                    }
                    else
                    {
                        g1.push_back(asteroids[i]);
                    }
                }
            }
        }
        if (g1.empty())
        {
            return {};
        }
        else
        {
            return g1;
        }
    };
};
