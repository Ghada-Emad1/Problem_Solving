class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
       int size=strs.size();
        if(size == 0 ) return "";
        else if(size == 1) return strs[0];
        else{
            sort(strs.begin(),strs.end());
            string res="";
            int length=strs[0].size();
            for(int i=0;i<length;i++){
                if(strs[0][i] == strs[size-1][i]){
                    res+=strs[0][i];
                }else break;
            }
            return res;
        }
         
        
        
      
    } 
};