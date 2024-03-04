#include <iostream>
#include <vector>

// Function to generate the Fibonacci sequence up to n elements
std::vector<int> generateFibonacci(int n) {
    std::vector<int> fibonacciSequence = {0, 1};

    while (fibonacciSequence.size() < n) {
        int nextNumber = fibonacciSequence.back() + fibonacciSequence[fibonacciSequence.size() - 2];
        fibonacciSequence.push_back(nextNumber);
    }

    return fibonacciSequence;
}

// Function to find the sum of even Fibonacci numbers under a given limit
int sumEvenFibonacci(int limit) {
    // Call the generateFibonacci function and give the limit to it
    std::vector<int> fibonacciNumbers = generateFibonacci(34); // Assuming 34 elements are enough for the example

    // Check if the generated number is divisible by two and sum the even Fibonacci numbers under the limit
    int evenSum = 0;
    for (int num : fibonacciNumbers) {
        if (num < limit && num % 2 == 0) {
            evenSum += num;
        }
    }

    return evenSum;
}

int main() {
    // Example: Find the sum of even Fibonacci numbers under 4 million
    int result2 = sumEvenFibonacci(4000000);
    std::cout << result2 << std::endl;

    return 0;
}
