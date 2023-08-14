class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>S;
        for(int i=0;i<tokens.size();i++){
            string token=tokens[i];
            if(token.size()>1 || isdigit(token[0])){
                S.push(stoi(token));
                continue;
            }
            int operand1=S.top();S.pop();
            int operand2=S.top();S.pop();
            int res=0;
            if(token=="+")res=operand1+operand2;
            else if(token=="-")res=operand2-operand1;
            else if(token=="*")res=operand2*operand1;
            else res=operand2/operand1;
            S.push(res);

        }
       
        return S.top();
    
    
            
        
    }
};
//time complexity:O(N)