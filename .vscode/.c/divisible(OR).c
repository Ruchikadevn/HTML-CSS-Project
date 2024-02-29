// Online C compiler to run C program online
#include <stdio.h>
int n;
int main() {
    // Write C code here
    printf("entr no");
    scanf("%d", &n);
    if(n%5==0 || n%3==0)
    {
        printf("no is divisible by 5 or 3");
    }
    else{
        printf("no is not div by 5 or 3");
    }
    
    
    return 0;
}