n=int(input())
l=list(map(int,input().split()))
sum=0
for i in l:
    sum=sum+(bin(i).count('1'))
print(sum)