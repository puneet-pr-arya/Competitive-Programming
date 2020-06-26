class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        // Iterate backwards through the vector of digits, all the way down to 0
        for (int i = digits.size() - 1; i != -1; i--)
        {

            // If current is 9, set it to 0
            if (digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            { // Otherwise, add one
                digits[i] += 1;
                return digits;
            }
        }
        // If the first digit is 0, insert 1 at the front
        if (digits[0] == 0)
        {
            digits.insert(digits.begin(), 1);
            digits[1] = 0;
        }
        return digits;
    }
};

// class Solution
// {
// public:
//     vector<int> plusOne(vector<int> &digits)
//     {
//         bool checker = false;
//         int siz = digits.size() - 1;
//         if (digits[siz] < 9)
//         {
//             digits[siz]++;
//         }

//         else if (digits[0] != 9)
//         {
//             for (int i = siz; i >= 0; i++)
//             {
//                 if (digits[siz] == 9 && checker == false)
//                 {
//                     digits[siz] = 0;
//                 }
//                 else
//                 {
//                     digits[siz]++;
//                     checker = true;
//                 }
//             }
//         }
//         else
//         {
//             vector<int> vect(siz + 2, 0);
//             vect[0] = 1;
//             return vect;
//         }

//         return digits;
//     }
// };

// class Solution
// {
// public:
//     vector<int> plusOne(vector<int> &digits)
//     {
//         bool checker = false;
//         int siz = digits.size() - 1;
//         if (digits[siz] < 9)
//         {
//             digits[siz]++;
//         }

//         else if (digits[0] != 9)
//         {
//             for (int i = siz; i >= 0; i++)
//             {
//                 if (digits[siz] == 9 && checker == false)
//                 {
//                     digits[siz] = 0;
//                 }
//                 else
//                 {
//                     digits[siz]++;
//                     checker = true;
//                 }
//             }
//         }
//         else
//         {
//             vector<int> vect(siz + 2, 0);
//             vect[0] = 1;
//             return vect;
//         }

//         return digits;
//     }
// };