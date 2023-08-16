class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
       vector<int>ans(temp.size(),0);
       stack<int>stk;
       for(int i=0;i<temp.size();++i){
          while(!stk.empty()&&temp[stk.top()]<temp[i]){
           const int prev=stk.top();
            stk.pop();
            ans[prev]=i-prev;

          }
          stk.push(i);
       }
       return ans;
    }
};
//time complexity;O(N)