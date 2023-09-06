/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
    let hashmap={}
    let res=[]
    for(let num of nums){
        if(hashmap[num])
        {
          hashmap[num]++
        }else{
            hashmap[num]=1
        }
        
    }
    let arr=Object.entries(hashmap)
    arr.sort((a,b)=>b[1]-a[1])
    arr.slice(0,k).forEach(ele=>res.push(ele[0]))
    return res;
 };