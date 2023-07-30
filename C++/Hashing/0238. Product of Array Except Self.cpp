class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int prefix=1;
        for(int i=0;i<n;i++){
            res[i]=prefix;
            prefix=prefix * nums[i];
        }
        int post=1;
        for(int j=n-1;j>=0;j--){
            res[j]=res[j]*post;
            post=post * nums[j];
        }
        return res;
    }
};