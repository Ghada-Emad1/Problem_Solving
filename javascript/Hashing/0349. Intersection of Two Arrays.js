/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    const res=[]
    const s1=new Set(nums1);
    const s2=new Set(nums2);
   for(num of s1)
   {
       if(s2.has(num))
       {
           res.push(num)
       }
   }
   return res;
};