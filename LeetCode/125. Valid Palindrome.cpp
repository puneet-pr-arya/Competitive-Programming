class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        string s2;
        for (int i = 0; i < s.size(); i++) 
        {if(('a'<=s[i]&& s[i]<='z') && 'A'<=s[i]&& s[i]<='Z')
            {
                s1[i]=s[s.size()-1-i];
                s2[i]=s[i];
                }
        }
        
        return s1==s2;
       
    }
};