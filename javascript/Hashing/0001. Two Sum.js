/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let ump=new Map();
    let arr=[];
    for(let i=0;i<nums.length;i++){
        if(ump.has(target-nums[i])){
            arr.push(ump.get(target-nums[i]));
            arr.push(i);
            return arr;
        }else{
            ump.set(nums[i],i);
        }
    }
    return arr;
};