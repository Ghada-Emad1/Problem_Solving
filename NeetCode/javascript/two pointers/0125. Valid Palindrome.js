/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    if(s.length===0)return true;
    let left=0;
    let right=s.length-1;
    while(left<right){
        leftchar=s[left];
        rightchar=s[right];
        if(!/[a-zA-Z0-9]/.test(leftchar)){
            left++;
        }
        else if(!/[a-zA-Z0-9]/.test(rightchar)){
            right--;
        }
       else{
           if(leftchar.toLowerCase() != rightchar.toLowerCase()) {
                return false;
            }
        left++;right--;

       } 

    }
    return true;
};
