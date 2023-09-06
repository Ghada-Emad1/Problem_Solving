class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>v(n+1);
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            v[itr->second].push_back(itr->first);
        }
        vector<int>res;
        for(int i=n;i>=0;i--){
            if(res.size()>=k){
                break;
            }
            if(!v[i].empty()){
                res.insert(res.end(),v[i].begin(),v[i].end());
            }
        }
        return res;
        
    }
};