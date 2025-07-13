
function isFibonacci(num) {
    // Handle edge cases
    if (num < 0) return false;
    if (num === 0 || num === 1) return true;
    
    // Check if 5*n^2 + 4 or 5*n^2 - 4 is a perfect square
    const test1 = 5 * num * num + 4;
    const test2 = 5 * num * num - 4;
    
    return isPerfectSquare(test1) || isPerfectSquare(test2);
}

function isPerfectSquare(num) {
    const sqrt = Math.floor(Math.sqrt(num));
    return sqrt * sqrt === num;
}

// Example usage
console.log(isFibonacci(5));  // true
console.log(isFibonacci(7));  // false
console.log(isFibonacci(8));  // true
console.log(isFibonacci(10)); // false