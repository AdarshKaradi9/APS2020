#include <iostream>
#include <vector>
#include <algorithm>
#define print1d(a,n){for (long long i = 0; i < n; i++) {printf("%d ", a[i]);}}
#define int long long int
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=0;
    cin>>t;
    while(t--){
        int n,flag=0,prev=-1,cur_count=0,c;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>c;
            if(c==0 && prev==1) {
                cur_count++;
            }
            else if(c==1){
                if(prev==1) {
                    if(cur_count<6) {
                        flag=1;
                    }
                    prev=1;
                    cur_count=1;
                }
                else{
                    cur_count++;
                    prev=1;
                }
            }
            
        }
        if(flag==0) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        
    }
    return 0;
    
}