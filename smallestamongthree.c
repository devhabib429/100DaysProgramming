//C Program to find Smallest number among three.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nEntered numbers is %d %d %d ",a,b,c);
    if(a<b){
        if(a<c){
            printf("\nSmallest number is %d",a);
        }
        else{
            printf("\nSmallest number is %d",c);
        }
    }
    else{
            printf("\nSmallest number is %d",b);
        }
    return 0;
}
