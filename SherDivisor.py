#!/bin/python3

import os
import sys

#
# Complete the divisors function below.
#
def divisors(n):
    if n % 2: # odd
        return 0
    else:
        n /= 2
        ans = 1
        p = 2
        while p <= n:
            if p * p > n: p = n
            e = 0
            while n % p == 0:
                e += 1
                n /= p
            ans *= e + 1
            p += 1
        return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = divisors(n)

        fptr.write(str(result) + '\n')

    fptr.close()