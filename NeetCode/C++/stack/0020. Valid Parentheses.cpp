class Solution {
public:
    bool isValid(string s) {
    stack<char>test;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
                test.push(')');
            }
            else if(s[i]=='{')
            {
                test.push('}');
            }
            else if(s[i]=='['){
                test.push(']');
            }
            else {
                if(test.empty()||s[i]!=test.top())
                {
                    return false;
                    return 0;
                }else{
                    test.pop();
                }
            }
        }
        if(test.empty()){
            return true;
        }else{
            return false;
        }
    }    
}; 