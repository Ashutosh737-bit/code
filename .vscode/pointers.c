#include <stdio.h>

int main(){
    int i=72;
    int*j=&i;
    int**k=&j;
    printf("address of i is %p\n", &i);
    printf("address of i is %p\n", j);
    printf("address of j is %d\n", *(&i));
    printf("address of k is %d\n", *(&(*(&j))));
    return 0;
}