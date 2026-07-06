/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let hasBeenCalled = false;    
    return function(...args){
        if (!hasBeenCalled) {
            hasBeenCalled = true;      // Flag ko true kar do
            return fn(...args);        // Original function ka result return karo
        }
        
        // Agar function pehle hi call ho chuka hai, toh undefined return hoga
        return undefined;
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
