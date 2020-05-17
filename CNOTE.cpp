#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    int X,Y,K,N;
    int P,C;
    int pages_req,budget,left;
    int lucky=0;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>X>>Y>>K>>N;
        pages_req=X-Y;
        left=K;
        for(int j=0;j<N;j++)
        {
            cin>>P>>C;
            if(pages_req<=P && C<=K)
                lucky=1;
        }
        if(lucky==1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
        lucky=0;
    }
    return 0;
}