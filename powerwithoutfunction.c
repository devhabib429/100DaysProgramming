//C Program to calculate the power without using POW function.
//2*2*2
#include <stdio.h>
int main()
{
    int base,pw,i=0,result=1;
    printf("Enter a base number: ");
    scanf("%d",&base);
    printf("Enter a pw: ");
    scanf("%d",&pw);
    for(i=0;i<pw;i++){
        result = base*result;
    }
    printf("\n%d",result);
    return 0;
}

