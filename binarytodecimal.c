// Write a program to convert from binary to decimal.
#include <stdio.h>

int main()
{
    int n,base=1,dec=0;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n>0){
        dec = dec+base*(n%10);
        n=n/10;
        base = base*2;
    }
    printf("\nDecimal Number is %d",dec);

    return 0;
}

