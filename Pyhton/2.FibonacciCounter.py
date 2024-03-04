import math

def count_fibonacci_numbers_under_limit(limit):
    phi = (1 + math.sqrt(5)) / 2
    n = math.floor(math.log(limit * math.sqrt(5) + 0.5) / math.log(phi)) - 1
    return n

# Example: Find how many Fibonacci numbers are under 100
limit = 4000000
result = count_fibonacci_numbers_under_limit(limit)
print(f"The number of Fibonacci numbers under {limit} is: {result}")
