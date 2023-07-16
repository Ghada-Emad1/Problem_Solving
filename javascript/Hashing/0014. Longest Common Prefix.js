/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if(strs.length ==0)return ""
    else if(strs.length ==1 ) return strs[0];
    else{
     strs.sort();
    let res="";
    let len=strs[0].length;
    for(let i=0;i<len;i++){
        if(strs[0][i]==strs[strs.length-1][i]){
            res+=strs[0][i];
        }else break;
    }
    return res;
    }

};