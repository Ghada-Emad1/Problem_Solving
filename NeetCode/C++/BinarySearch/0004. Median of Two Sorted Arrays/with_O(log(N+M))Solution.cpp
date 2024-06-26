class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
    int n = nums2.size();
    if (m > n)
    {
        return findMedianSortedArrays(nums2, nums1);
    }
    int total = m + n;
    double res = 0.0;
    int low = 0;
    int high = m;
    while (low <= high)
    {
        int i = low + (high - low) / 2;
        int j = (total + 1) / 2 - i;
        int left1 = (i > 0) ? nums1[i - 1] : INT_MIN;
        int left2 = (j > 0) ? nums2[j - 1] : INT_MIN;
        int right1 = (i < m) ? nums1[i] : INT_MAX;
        int right2 = (j < n) ? nums2[j] : INT_MAX;
        if (left1 <= right2 && left2 <= right1)
        {
            if (total % 2 == 0)
            {
                res = (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            else
            {
                res = max(left1, left2);
            }
            break;
        }
        else if (left1 > right2)
        {
            high = i - 1;
        }
        else
        {
            low = i + 1;
        }
    }
    return res; 
    }
};