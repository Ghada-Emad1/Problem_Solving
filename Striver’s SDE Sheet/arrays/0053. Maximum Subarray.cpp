class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum=0,ans=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum=max(nums[i],nums[i]+sum);
        //cout<<sum<<" ";
        ans=max(ans,sum);
    }
    //cout<<ans;
    return ans;
    }
};