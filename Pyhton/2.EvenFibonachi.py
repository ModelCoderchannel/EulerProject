
def generate_fibonacci(n):
    
    fibonacci_sequence = [0, 1]

    while len(fibonacci_sequence) < n:
        next_number = fibonacci_sequence[-1] + fibonacci_sequence[-2]
        fibonacci_sequence.append(next_number)

    return fibonacci_sequence

def sum_even_fibonacci(limit):
    #call the our fibonacci function and give the limit to it 
    fibonacci_numbers = generate_fibonacci(34) 
    #check if the genarated number dividble on two or not 
    even_sum = sum(num for num in fibonacci_numbers if num < limit and num % 2 == 0)
    return even_sum

# Example: Find the sum of even Fibonacci numbers under 4 million
result2 = sum_even_fibonacci(4000000)
print(result2)
