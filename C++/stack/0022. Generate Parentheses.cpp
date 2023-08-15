class Solution {
    private:
    void generate(int n,int open ,int close,string str,vector<string>&res){
        if(n==open &&n==close){
            res.push_back(str);
            return ;
        }
        if(n>open) generate(n,open+1,close,str+'(',res);
        if(open>close)generate(n,open,close+1,str+')',res);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate(n,0,0,"",res);
        return res;
    }
};