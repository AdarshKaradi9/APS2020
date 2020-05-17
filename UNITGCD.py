t=int(input())
for _ in range(t):
    n=int(input())
    if(n==1):
        print(1)
        print(1,1)
    elif(n%2==0):
        print(n//2)
        for i in range(1,n+1,2):
            print(2,end = ' ')
            print(i,i+1)
    else:
        print(n//2)
        for i in range(1,n-2,2):
            print(2,end = ' ')
            print(i,i+1)
        print(3,n-2,n-1,n)
        