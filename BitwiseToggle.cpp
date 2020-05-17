#include <stdio.h> 
char *toggleCase(char *a) 
{ 
    for (int i=0; a[i]!='\0'; i++) { 
  
        a[i] ^= 32; 
    } 
  
    return a; 
} 
int main() 
{ 
    char str[] = "CheRrY"; 
    printf("Toggle case: %s\n", toggleCase(str)); 
    printf("Original string: %s", toggleCase(str)); 
    return 0; 
} 