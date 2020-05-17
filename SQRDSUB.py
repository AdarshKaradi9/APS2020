from sys import stdin, stdout  
t=int(input())
for _ in range(t):
    ev=0
    o=0
    n = int(stdin.readline()) 
    l=[]
    for x in stdin.readline().split():
        t=int(x)
        l.append(t%4)
        if(t%2!=0):
            o=o+1
        else:
            if(t%4==2):
                ev=ev+1
    c=0
    if(o==n):
        print(n*(n+1)//2)
    elif(o==0):
        print(n*(n+1)//2-ev)
    else:
        for i in range(n):
            prd=1
            for j in range(i,n):
                prd=prd*l[j]
                x=prd%4
                if(x==0):
                    c=c+1
                    c=c+(n-j-1)
                    break
                elif(x!=2):
                    c=c+1
        print(c)