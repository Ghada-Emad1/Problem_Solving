class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                sum-=s.top();
                s.pop();
            }
            else if(operations[i]=="D"){
                sum+=2*s.top();
                s.push(2*s.top());
            }
            else if(operations[i]=="+"){
                int first=s.top();
                s.pop();
                int second=s.top();
                s.push(first);
                s.push(first+second);
                sum+=(first+second);
            }
            else{
                //stoi turns a string into an interger
                sum+=stoi(operations[i]);
                s.push(stoi(operations[i]));
            }
        }
        return sum;
        
    }
};