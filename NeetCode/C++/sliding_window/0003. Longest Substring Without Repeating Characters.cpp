class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char>longest;
        int i=0,j=0;
        int maxL=0;
        while(j<s.size()){
            longest.insert(s[j]);
            maxL=max(maxL,j-i+1);
            j++;
            while(longest.find(s[j])!=longest.end()){
                longest.erase(s[i]);
                i++;
            }
        }
        return maxL;
    }
    
};