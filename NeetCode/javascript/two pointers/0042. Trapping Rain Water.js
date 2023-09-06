/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    let i=0
    let j=height.length-1
    let maxRight=height[j]
    let maxLeft=height[i]
    let res=0
    while(i<j){
        if(height[i]<=height[j]){
            i++;
            maxLeft=Math.max(maxLeft,height[i])
            res+=maxLeft-height[i]
        }
        else{
            j--;
            maxRight=Math.max(maxRight,height[j])
            res+=maxRight-height[j]
        }
    }
    return res;
};