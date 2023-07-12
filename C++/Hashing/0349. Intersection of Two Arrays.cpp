class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s{nums1.begin(),nums1.end()};
        vector<int>v;
        for(auto itr=nums2.begin();itr!=nums2.end();itr++)
        {
            if(s.find(*itr)!=s.end())
            {
                v.push_back(*itr);
                s.erase(*itr);
            }
        }
        return v;
    }
};