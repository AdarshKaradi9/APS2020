def prime_factors(n,k):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return (len(factors)>=k)
  
t=int(input())
for _ in range(t):
    x,k=list(map(int,input().split()))
    if(prime_factors(x,k)):
        print(1)
    else:
        print(0)
    