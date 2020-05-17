#include <stdio.h>
#include <stdlib.h>
 
int factors (unsigned long long int n) {
    unsigned long long int x = 1; 
    int i = 0;
    while ( x <= n  && i < 16 ) {
        x = x * pr[i];
        ++i;
    } 
    return i - 1;
}

int main() {
    
    int t, i;
    unsigned long long int n;    
    scanf("%d", &t);
    for (i = 1; i <=t; ++i) {
        scanf("%lld", &n); 
        printf("%d\n", factors(n));
    }
    return 0;