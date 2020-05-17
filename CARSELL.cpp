#include <iostream>
#include <vector>
#include <algorithm>
#define print1d(a,n){for (long long i = 0; i < n; i++) {printf("%d ", a[i]);}}
#define int long long int
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=0,m=1000000007;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++) {
            cin>>p[i];
        }
        sort(p.begin(),p.end(),greater<int>());
        int profit=0;
        for(int i=0;i<n;i++) {
            if(p[i]>=i)
                profit=profit+p[i]-i;
            else {
                break;
            }
        }
        cout<<profit%m<<"\n";
    }
    return 0;
    
}