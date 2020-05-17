#include<bits/stdc++.h>
using namespace std;

int lcs(char *X , char *Y , int lenX , int lenY){
    int **seq = new int*[lenX+1];
    for (int i = 0 ; i<= lenX ; i++)  seq[i]  = new int[lenY+1];
    for(int i = 0; i<=lenX ; i++){
        for (int j = 0;j<=lenY ; j++ ){
            if (i==0||j==0)
                seq[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                seq[i][j] = seq[i-1][j-1]+1;
            else
                seq[i][j]  = max(seq[i][j-1],seq[i-1][j]);
        }
    }   
    return seq[lenX][lenY];
}


int main(){
    char X[] = "AGGTAB";  
    char Y[] = "GXTXAYB";  
      
    int m = strlen(X);  
    int n = strlen(Y);  
      
    cout << "Length of LCS is " 
         << lcs( X, Y, m, n ); 
    return 0;
}