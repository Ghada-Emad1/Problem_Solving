class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        vector<int>f1(26,0); //for s1
        vector<int>f2(26,0); //for s2;
        if(m>n)return false;
        for( char i:s1){f1[i-'a']++;}
        for(int i=0;i<m-1;i++){
            f2[s2[i]-'a']++;
        }
        for(int i=m-1;i<n;i++){
            f2[s2[i]-'a']++;
            if(f1==f2)return true;
            f2[s2[i-(m-1)]-'a']--;
        }
        return false;
    }
    
};
//time complexity:O(N),space complexity:O(1)