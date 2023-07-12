/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    const res=[]
    for(let i=0;i<nums.length;i++)
    {
       res.push(nums[i]);
    }
    for(let i=0;i<nums.length;i++)
    {
       res.push(nums[i]);
    }
    return res;
};