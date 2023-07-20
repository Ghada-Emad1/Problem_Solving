/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let count=0
    const increment=()=>init + ++count
    const decrement=()=>init + --count
    function reset(){count=0;return init}
    return {increment,decrement,reset}
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */