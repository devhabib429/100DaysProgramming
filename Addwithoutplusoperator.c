//Write a program in C to add two integer without using arithmetic + operator.
#include <stdio.h>

int main()
{
   int n1,n2;
   printf("Enter a number1 :");
   scanf("%d",&n1);
   printf("\nEnter a number2 :");
   scanf("%d",&n2);
   
   for(int i=1;i<=n2;i++)
   {
       n1++;
   }
    
    printf("\na = %d",n1);
    
    return 0;
}