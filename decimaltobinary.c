//Write a program in C to convert decimal to binary.
//8 = 1000
//7 = 0111
#include <stdio.h>
int main()
{
   int n;
   int i;
   int bin[20];
   printf("Enter a number :");
   scanf("%d",&n);
   for(i=0;n>0;i++){
       bin[i] = n%2;
       n = n/2;
   }
  for(i=i-1;i>=0;i--)    
   {    
    printf("%d",bin[i]);    
   }    
    
    return 0;
}