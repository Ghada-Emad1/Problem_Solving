class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        int n = nums.size();
        if (n < 3) return res;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i - 1] == nums[i])continue;
            
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) j++;
                else if (sum > 0)k--;
                else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    //when there is duplicated value
                    while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    while (j < k && nums[k - 1] == nums[k]) {
                        k--;
                    }
                    j++;
                    k--;
                }
            }
        }
        
        return res;
    }
};
//time complexity : O(N^2)