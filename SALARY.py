T=int(input())
while T>0:
    n=int(input())
    arr=[int(A) for A in input().split()]
    print(sum(arr)-n*min(arr))
    T-=1