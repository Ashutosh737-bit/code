
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (n%i==0) {
           
        }else
        {
           count++;
        }
        
    
    }
    

    printf("number of prime numbers up to %d is: %d\n", n, count);

    return 0;
}