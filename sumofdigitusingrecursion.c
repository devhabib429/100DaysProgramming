//Write a program in C to find sum of digits of a number using recursion.
//112
#include <stdio.h>

int sumofdigit(int n){
     static int sum=0;
     sum = sum + (n%10);
     n = n/10;
     if(n>0){
         sumofdigit(n);
     }
     return sum;
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("Sum digit is %d",sumofdigit(n));
    
    return 0;
}
