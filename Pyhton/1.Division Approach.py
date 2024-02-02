def sum_of_multiples_division(limit):
    total_sum = 0
    for num in range(limit):
        if num % 3 == 0 or num % 5 == 0:
            total_sum += num
    return total_sum

# Example usage with a limit of 1000
result_division = sum_of_multiples_division(1000)
print(result_division)
