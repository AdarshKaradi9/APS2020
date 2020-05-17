#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T,N,C,A;
    cin>>T;
    vector<int> v(T,0);
    for(int i=0;i<T;i++)
    {
        cin>>N>>C;
        for(int j=0;j<N;j++)
        {
            cin>>A;
            v[i]=v[i]+A;
        }
        if(v[i]<=C)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    } 
}