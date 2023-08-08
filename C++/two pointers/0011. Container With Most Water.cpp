class Solution {
public:
    int maxArea(vector<int>& height) {
        int res,curr=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            curr=(j-i)*min(height[i],height[j]);
            res=max(curr,res);
            if(height[j]>=height[i])i++;
            else j--;
        }
        return res;
    }
};
//time complexity : O(N)