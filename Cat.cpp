#include<bits/stdc++.h>
using namespace std;

int catalanDP(int x){
    int *catalan;
    catalan =new int(x+1);
    catalan[0] = catalan[1] =1;
    for (int i = 2 ; i <= x ; i++){
        catalan[i] = 0;
        for (int j = 0 ; j< i ; j++){
            catalan[i]+=catalan[j]*catalan[i-j-1];
        }
    }
    return catalan[x];
}

int binomialCoeff( int n , int r){
    int res = 1;
    if (r > n-r)
        r=n-r;
    for (int i = 0 ; i < r; i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}

int catalanBi(int n ){
    int c = binomialCoeff(2*n , n);
    return c/(n+1);
}



int main(){
    int n;
    cout<<"Enter n for nth catalan number: ";
    cin>>n;
    cout<<catalanDP(n)<<"\n";
    cout<<catalanBi(n);
}