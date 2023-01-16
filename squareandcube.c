//Suare and Cube of input
#include <stdio.h>
void square(int n){
    int sq = n*n;
    printf("Square is %d",sq);
}
void cube(int n){
    int cb = n*n*n;
    printf("Cube is %d",cb);
}
int main()
{
    int n,choose,c;
    do{
        printf("Enter a Number :");
    scanf("%d",&n);
    printf("1. Square");
    printf("\n2. Cube");
    printf("\nEnter a Choice :");
    scanf("%d",&choose);
    switch(choose){
        case 1:
            square(n);
            break;
        case 2:
            cube(n);
            break;
        default:
            printf("\nWronng enter choice !");
    }
    printf("\nDo you want repeat 1/0");
    scanf("%d",&c);
    }while(c==1);

    return 0;
}
