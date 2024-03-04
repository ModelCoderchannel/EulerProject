# Function to find the sum of even Fibonacci numbers under a given limit
def fibonacci_sum_even(limit):
    # Initialize variables
    fibonacci_sequence = [0, 1]
    even_sum = 0

    # Main loop to generate Fibonacci numbers
    while True:
        # Calculate the next Fibonacci number
        next_number = fibonacci_sequence[-1] + fibonacci_sequence[-2]

        # Check if the next Fibonacci number exceeds the limit
        if next_number >= limit:
            break

        # Check if the next Fibonacci number is even
        if next_number % 2 == 0:
            even_sum += next_number  # Add the even Fibonacci number to the sum

        # Append the next Fibonacci number to the sequence
        fibonacci_sequence.append(next_number)

    return even_sum  # Return the sum of even Fibonacci numbers

# Example: Find the sum of even Fibonacci numbers under 4 million
result = fibonacci_sum_even(4000000)
print(result)

