#include <stdio.h>

int main(){
    int a;
    int l;
    printf("the length of the rectange is ");
    scanf("%d",&a);
    printf("the breadth of the rectangle is " );
    scanf("%d",&l);
    int area= l*a;
    printf("area of trhe rectangle is %d\n",area);
    return 0;
}



#include <stdio.h>

int main(){
    int number;
    printf("the number for divisibility check \n");
    scanf("%d",&number);
    if (number%97==0)
    {
        printf("the niumber is divisible by 97");
    }
    
    return 0;
}


#include <stdio.h>

int main(){
    int n;
    printf("the no. of natural number is ");
    scanf("%d",&n);
    int i;
    do
    {
       printf("the value of i is %d \n",i);
       i++;
    
    } while (i<=n);
    
    return 0;
}


#include <stdio.h>

int main(){
    int n;
    printf("the multiplication table of ");
    scanf("%d",&n);
    int i;
    for ( i = 1; i<=10 ; i++)
    {
        int j = n*i;
        int sum ;
        printf("%d X %d = %d \n",n,i,j);
      
    }
    
    return 0;
}




#include <stdio.h>

int main(){
    int i=1;
    int sum=0;
    do
    { 
        sum+=i;
        i++;

    } while ( i<=10);
    
        printf("the sum of first 10 no. is %d ",sum);
    return 0;
}




#include <stdio.h>

int main() {
    int n, count = 0;

    printf("enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) 
    {
        if (n%i==0) 
        {
               //what to do then ??           
        }
        else
        {
            //you should print something here?
           count++;
        }
        
    
    }
    

    printf("number of prime numbers up to %d is: %d\n", n, count);

    return 0;
}
