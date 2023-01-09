Write a program to reverse an integer in C.
//123
// (30+2)*10 = 320
#include <stdio.h>
int main()
{
    int n,rem;
    int rev=0;
   printf("Enter a Number: ");
   scanf("%d",&n);
   printf("\nEntered number is: %d",n);
   while(n!=0){
       rem = n%10;
       rev = (rev + rem)*10;
       n = n/10;
   }
   rev = rev/10;
   printf("\nReverse of Input Integer: %d",rev);
    return 0;
}
