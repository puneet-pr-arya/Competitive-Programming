class Solution {
public:
    bool isValid(string s) {
  stack<char> ss;
   char ch;
   for (int i=0; i<s.length(); i++) {    
      if (s[i]=='('||s[i]=='['||s[i]=='{') {    
         ss.push(s[i]);
         continue;
      }
      if (ss.empty())    
         return false;
         switch (s[i]) {
            case ')':    //
               ch = ss.top();
               ss.pop();
               if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': 
               ch = ss.top();
               ss.pop();
               if (ch=='(' || ch=='[')
                  return false; 
                  break;
            case ']': 
               ch = ss.top();
               ss.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (ss.empty()); 
    }
};