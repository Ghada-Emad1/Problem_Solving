/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let maxp=0
    let r=0, l=0
    while(r<prices.length){
        if(prices[r]>prices[l]){
            maxp=Math.max(maxp,prices[r]-prices[l])
        }
        else l=r;
        ++r;
    }
    return maxp
};