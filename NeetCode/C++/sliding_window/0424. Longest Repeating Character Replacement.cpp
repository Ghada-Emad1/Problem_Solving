class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26);
        int i=0,j=0,res=0,maxf=0;
        while(j<s.size()){
            count[s[j]-'A']++;
            //maximum frequency of characters
            maxf=max(maxf,count[s[j]-'A']);
            if(j-i+1-maxf>k){
                count[s[i]-'A']--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
      
    }
};
//time complexity :O(N) , space complexity :O(26)