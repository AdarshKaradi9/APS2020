#include<bits/stdc++.h> 
using namespace std; 
  
void subString(char str[], int n)  
{ 
    for (int len = 1; len <= n; len++)  
    {     
        for (int i = 0; i <= n - len; i++)  
        {   
            int j = i + len - 1;             
            for (int k = i; k <= j; k++)  
                cout << str[k]; 
              
            cout << endl; 
        } 
    } 
} 
  
int main()  
{ 
    char str[] = "abc"; 
    subString(str, strlen(str)); 
    return 0; 
} 