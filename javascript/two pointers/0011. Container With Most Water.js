/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let res=0,curr=0
    let i=0
    let j=height.length-1
    while(i<j){
        curr=(j-i)*Math.min(height[i],height[j])
        res=Math.max(res,curr)
        if(height[i]<=height[j])i++;
        else j--;
    }
    return res;
};