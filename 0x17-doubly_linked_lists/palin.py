def is_palindrome(n):
    return str(n) == str(n)[::-1]

def find_largest_palindrome():
    largest_palindrome = 0
    factors = (0, 0)

    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
                factors = (i, j)

    return largest_palindrome, factors

result, factors = find_largest_palindrome()

with open("102-result", "w") as file:
    file.write(f"{result} = {factors[0]} x {factors[1]}\n")
