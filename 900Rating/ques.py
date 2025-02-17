def count_expressible_numbers(N):
    expressible_numbers = set()
    
    a = 2
    while a ** 2 <= N:
        b = 2
        while (x := a ** b) <= N:
            expressible_numbers.add(x)
            b += 1
        a += 1
    
    return len(expressible_numbers)


N = int(input().strip())

result = count_expressible_numbers(N)

print(result)

