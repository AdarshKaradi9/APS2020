import math
import os
import random
import re
import sys

def lonelyinteger(a):
    answer = 0
    for candidate in a:
        answer ^= candidate
    return answer

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    a = list(map(int, input().rstrip().split()))

    result = lonelyinteger(a)

    fptr.write(str(result) + '\n')

    fptr.close()
