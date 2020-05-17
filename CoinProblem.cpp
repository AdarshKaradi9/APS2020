#include <bits/stdc++.h>
using namespace std;

int change(int C[] , int n , int m){ // n is size of C[] m is target number
    int **coins  = new int*[n];
    for (int i = 0; i<n ;i++) coins[i] = new int[m+1];
    for (int i = 0 ; i<n ;i++){
        coins[i][0]=0;
        for(int j = 1;j<=m;j++){
            if (i == 0){
                if(C[i]<= j ) 
                    coins[i][j]=1+coins[i][j-C[i]];
                else
                    coins[i][j]=0;
            }
            else if(C[i]<= j )
                coins[i][j] = min(coins[i-1][j],1+coins[i][j-C[i]]);
            else 
                coins[i][j]=coins[i-1][j];     
        }
    }
    return coins[n-1][m];
}

int main(){
    int arr[] = {1, 2, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int m = 4; 
    cout << change(arr, n, m); 
    return 0;
}