// Write a program of factorial.
//6 
//1*2*3*4*5*6
#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n>0){
        fact = fact*n;\
        n= n-1;
    }
    printf("\nFactorial is %d",fact);

    return 0;
}
// Write a program of factorial.
//6 
//1*2*3*4*5*6
#include <stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("\nFactorial is %d",fact(n));

    return 0;
}
