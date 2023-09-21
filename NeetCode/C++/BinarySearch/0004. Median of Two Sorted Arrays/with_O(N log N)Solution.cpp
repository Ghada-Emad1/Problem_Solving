class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        for (auto i : nums1)
    {
        merge.push_back(i);
    }
    for (auto j : nums2)
    {
        merge.push_back(j);
    }
    sort(merge.begin(), merge.end());
    int l = 0;
    int r = merge.size() - 1;
    int mid = l + (r - l) / 2;
    cout << mid << endl;
    double res=0.0;
    if (merge.size() % 2 == 0)
    {
        int left = merge[mid];
        res = (left + merge[mid + 1]) / 2.0;
        cout << left + merge[mid + 1] << endl;
        
        //cout << res;
    }
    if (merge.size() % 2 != 0)
    {
        res = merge[mid] / 1.0;
       // cout << res;
    }
    return res;
    }
};