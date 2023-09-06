class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[count])count++;
        }
        return count==s.size();
    }
};