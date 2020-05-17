#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int LCS(string str1, string str2, int len1, int len2)

{

    int i, j;
    int LCS[len1+1][len2+1];
    for(i=0;i<=len1;i++)
        LCS[i][0]=0;    
        
    for(j=0;j<=len2;j++)

        LCS[0][j]=0;   
    for(i=1;i<=len1;i++)

    {
        for(j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                LCS[i][j]=1+LCS[i-1][j-1];
            }
            else{
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }
    return LCS[len1][len2];
}

int main() {
string s1,s2;
    cin>>s1;
    cin>>s2;
    int n1=s1.length();
    int n2=s2.length();
    cout<<LCS(s1,s2,n1,n2)<<endl;    return 0;
}