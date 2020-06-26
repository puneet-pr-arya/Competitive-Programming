class Solution
{
public:
    string addBinary(string a, string b)
    {
        int number1, number2, number3;
        string d;
        number1 = stoi(a);
        number2 = stoi(b);
        number3 = number1 + number2;
        d = to_string(number3);
        bool checker = false;

        int siz = d.length();

        for (int i = siz - 1; i >= 0; i--)
        {
            if (checker == true && d.at(i) != '2')
            {
                d.at(i) = '1';
                checker = false;
            }
            else if (d.at(i) == '2')
            {
                d.at(i) = '0';
                checker = true;
            }
        }

        if (d.at(0) == '0')
        {
            string c;
            c = '1' + d;
            return c;
        }

        return d;
    }
};