def factorisation(n):
    if n==0:
        return 1
    return n * factorisation(n-1)

m = int(input())
print(factorisation(m))