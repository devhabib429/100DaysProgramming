// Write a program to convert from binary to decimal.
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

