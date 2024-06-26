/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
	return async function(...args) {
        return await Promise.race([
            fn(...args),
            new Promise((_,reject)=>{
                setTimeout(()=>reject("Time Limit Exceeded"),t)
            })
        ])
        
    }
};

//promise.race(): it "races" the promises, 
//and the first promise to settle determines the outcome of the returned promise.
/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */