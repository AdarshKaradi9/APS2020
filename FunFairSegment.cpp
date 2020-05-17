#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define print1d(a,n){for (long long i = 0; i < n; i++) {printf("%d ", a[i]);}}

int getMid(int s, int e) {  return s + (e -s)/2;  }
int minVal(int x, int y) { return (x < y)? x: y; }

int getMin(int *st, int s, int e, int l, int r, int si) {
    if(s>=l && e<=r) {
        return st[si];
    }
    else if(s>r || e<l)
        return 100001;
    else {
        int mid=getMid(s,e);
        return minVal(getMin(st,s,mid,l,r,si*2+1),getMin(st,mid+1,e,l,r,si*2+2));
    }
}

int fill_st(int a[],int s, int e, int* st, int si) {
    if(s==e) {
        st[si]=a[s];
        return a[s];
    }
    
    int mid=getMid(s,e);
    
    st[si]=minVal(fill_st(a,s,mid,st,si*2+1),fill_st(a,mid+1,e,st,si*2+2));
    return st[si];
}

int* construct_st(int a[],int N) {
    int x = (int)(ceil(log2(N)));  
    int st_size = 2*(int)pow(2, x) - 1;
    int *st=(int*)malloc(st_size*sizeof(int));
    fill_st(a,0,N-1,st,0);
    return st;
}

int main() {

    int N,M;
    int l,r;
    scanf("%d %d",&N,&M);
    int a[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&a[i]);
    }
    int *st=construct_st(a,N);
    for(int i=0;i<M;i++) {
        
        scanf("%d %d",&l,&r);
        int m=getMin(st,0,N-1,l,r,0);
        printf("%d\n",m);
    }
   
    return 0;
}