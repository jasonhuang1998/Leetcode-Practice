class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                mystack.push(s[i]);
            else if (!mystack.empty()){
                if (s[i] == ')' && mystack.top() != '(')
                    return false;
                else if (s[i] == '}' && mystack.top() != '{')
                    return false;
                else if (s[i] == ']' && mystack.top() != '[')
                    return false;
                mystack.pop();
            }
            else
                return false;
        }
        return (mystack.empty())?true:false;
    }
};
