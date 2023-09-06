class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpp;
        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }
        int j=0,i=0;
        int counter=t.size();
        int minstart=0;
        int minlength=INT_MAX;
        while(j<s.size()){
            
            if(mpp[s[j]]>0)counter--;
            mpp[s[j]]--;
            j++;
            while(counter==0){
            if(j-i<minlength){
                minstart=i;
                minlength=j-i;
            }
            mpp[s[i]]++;
            if(mpp[s[i]]>0)counter++;
            i++;
        }
        }
       
        if(minlength!=INT_MAX){
            return s.substr(minstart,minlength);
        }
        return "";
    }
};