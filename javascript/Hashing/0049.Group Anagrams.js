let strs = ["eat","tea","tan","ate","nat","bat"];

var groupAnagrams = function(strs) {
    if (strs.length == 0) {
        return [[""]];
    }
    
    const mp = new Map();
    
    for (let str of strs) {
        const sortedStr = str.split('').sort().join('');
        
        if (mp.has(sortedStr)) {
            mp.get(sortedStr).push(str);
        } else {
            mp.set(sortedStr, [str]);
        }
    }
    
    const results = []
    
    for (let strArrays of mp.values()) {
        results.push(strArrays);
    }
    
    return results;
};

console.log(groupAnagrams(strs))