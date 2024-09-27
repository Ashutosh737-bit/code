#include <stdio.h>

int sum(int);

int sum(int n){
    if(n==1){
        return 1;
    }

    return sum(n-1) + n;
}

int main(){
    printf("the sum of first 6 natural no. is %d",sum(6));
    return 0;
}