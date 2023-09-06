/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let p=0
    let size=nums.length-1;
    for(let i=p;i<=size;i++){
        if(nums[i]===0)
        {
         [nums[i],nums[p]]=[[nums[p]],nums[i]];
         p++;
        }
        if(nums[i]===2)
        {
            [nums[i],nums[size]]=[nums[size],nums[i]];
            size--;
            i--;
        }
        

        
    }
};