class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxLeft=height[i];
        int maxRight=height[j];
        int res=0;
        while(i<j){
            if(height[i]<height[j])
            {
                i++;
                maxLeft=max(height[i],maxLeft);
                res+=maxLeft-height[i];
            }
            else{
                j--;
                maxRight=max(height[j],maxRight);
                res+=maxRight-height[j];
            }
        }
        return res;
    }
};
//Time complexity:O(N) ,space complexity:O(1)