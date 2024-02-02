
def multiples_multiplication(limit):
    total = 0
    for i in range(1, limit):
        multiple_3 = i * 3
        if multiple_3 < limit:
            total += multiple_3

        multiple_5 = i * 5
        if multiple_5 < limit and multiple_5 % 3 != 0:
            total += multiple_5

    return total

# limit here is 1000
result = multiples_multiplication(1000)
print(result)






