// Last updated: 06/03/2026, 21:36:47
class Solution {
public:
    bool isValid(string s) {
        
        int n = s.size();
        stack<char> st;

        for(int i = 0; i < n; i++) {
            if(s[i] == '(' or s[i] == '[' or s[i] == '{') {
               st.push(s[i]);
            } else {
            if(st.empty()) 
              return false;
            if(s[i] == ')' && st.top() == '(')                   st.pop();
                else if(s[i] == ']' && st.top() == '[') st.pop();
                else if(s[i] == '}' && st.top() == '{') st.pop();
                else return false;
}
}
if(!st.empty()) 
  return false;
return true;
    }
};