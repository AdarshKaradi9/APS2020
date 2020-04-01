#include<iostream>
using namespace std;

int catalan_binary_trees(int n)
{
    int *c = (int*) malloc(n);
    c[0]=1;
    c[1]=1;
    c[2]=2;
    int i,j;
    for(i=3;i<=n;i++)
    {
        c[i]=0;
        for(j=0;j<i;j++)
        {
            c[i]+=c[j] * c[(i-1)-j];
        }
    }
    return c[n];
}

int main() {
    int n;
    cin>>n;
    catalan_binary_trees(n);
    return 0;
}