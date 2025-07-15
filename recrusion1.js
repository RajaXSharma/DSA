// Countdown function using recursion
function countdown(n) {
    if (n <= 0) {
        console.log("Done!");
        return;
    }
    
    console.log(n);
    
    countdown(n - 1);
}

// Example usage
console.log("Starting countdown:");
countdown(5);