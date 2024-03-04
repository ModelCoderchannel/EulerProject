#include <iostream>
#include <vector>

// Function to find the sum of even Fibonacci numbers under a given limit
int fibonacciSumEven(int limit) {
    std::vector<int> fibonacciSequence = {0, 1};
    int evenSum = 0;

    // Main loop to generate Fibonacci numbers
    while (true) {
        // Calculate the next Fibonacci number
        int nextNumber = fibonacciSequence.back() + fibonacciSequence[fibonacciSequence.size() - 2];

        // Check if the next Fibonacci number exceeds the limit
        if (nextNumber >= limit) {
            break;
        }

        // Check if the next Fibonacci number is even
        if (nextNumber % 2 == 0) {
            evenSum += nextNumber;  // Add the even Fibonacci number to the sum
        }

        // Append the next Fibonacci number to the sequence
        fibonacciSequence.push_back(nextNumber);
    }

    return evenSum;  // Return the sum of even Fibonacci numbers
}

int main() {
    // Example: Find the sum of even Fibonacci numbers under 4 million
    int result = fibonacciSumEven(4000000);
    std::cout << result << std::endl;

    return 0;
}
