#include <iostream>
#define P2(n) n, n ^ 1, n ^ 1, n 
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n) 
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n) 
#define LOOK_UP P6(0), P6(1), P6(1), P6(0) 
#define int long long int
using namespace std;

unsigned int table[256] = { LOOK_UP }; 
  
int Parity(int x)
{
	x ^= x >> 16;
	x ^= x >> 8;
	x ^= x >> 4;
	x ^= x >> 2;
	x ^= x >> 1;
	return x & 1;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,q,p,num,even,odd; 
    cin>>t; 
    for(int i=0;i<t;i++) {
        cin>>n>>q; 
        odd=0;
        even=0;
        for(int j=0;j<n;j++) {
            cin>>num; 
            if(Parity(num)&1)
                odd+=1;
        }
        even=n-odd;
        for(int j=0;j<q;j++) {
            cin>>p;
            if(Parity(p)&1)
                printf("%d %d\n",odd,even);
            else
                printf("%d %d\n",even,odd);
        }
    }
	return 0;
}
