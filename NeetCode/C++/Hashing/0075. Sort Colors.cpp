class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p=0;
        int size=nums.size()-1;
        for(int i=p;i<=size;i++){
            if(nums[i]==0){
                swap(nums[i],nums[p]);
                p++;
            }
            if(nums[i]==2){
                swap(nums[i],nums[size]);
                size--;
                i--;
            }
        }
        
    }
};