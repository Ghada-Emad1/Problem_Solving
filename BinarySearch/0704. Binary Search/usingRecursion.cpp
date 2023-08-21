class Solution {
    private:
    int BinarySearch(vector<int>&nums,int low,int high,int target){
        if(low>high)return -1;
        int mid=low+(high-low)/2;
        if(target==nums[mid])return mid;
        else if(nums[mid]>target)return BinarySearch(nums,low,mid-1,target);
        else return BinarySearch(nums,mid+1,high,target);
    }
    
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return BinarySearch(nums,0,n-1,target);
        
    }
};