def search(H,k):
    for i in range(1,len(H)):
        if(H[i]==k):
            return i

def heapify(H):
    n=len(H)
    for i in range(n//2,0,-1):
        k=i
        v=H[i]
        heap=False
        while heap==False and 2*k<n:
            j=2*k
            if j+1<n:
                if H[j]>H[j+1]:
                    j=j+1
            if v<=H[j]:
                heap=True
            else:
                H[k]=H[j]
                k=j
        H[k]=v  
            
t=int(input())
H=[]
H.append(0)
for i in range(0,t):
    a=list(map(int,input().split()))
    if(a[0]==1):
        k=a[1]
        H.append(k)
        heapify(H)
            
    if(a[0]==2):
        k=a[1]
        ind=search(H,k)
        if(ind==(len(H)-1)):
            H.pop(len(H)-1)
        else:
            leaf=len(H)-1
            temp=H[leaf]
            H[ind]=H[leaf]
            heapify(H)
    if(a[0]==3):
        print(H[1])
