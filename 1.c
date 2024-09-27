#include <stdio.h>

int main(){
    int age= 0;
    printf("enter age:");
    scanf("%d", &age);
    if(age>60){
        printf("you okay");
    }
    else{
        printf("not okay\n");
        printf("not at all okay\n");
    }
    return 0;
}
