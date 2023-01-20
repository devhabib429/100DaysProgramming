
#include <stdio.h>

int main()
{
    char c;
    int x,t=0;
    printf("Enter a Character : ");
    scanf("%c",&c);
    x = (int)c;
    printf("\nEnter char is %d",x);
    for(int i=48;i<=57;i++){
        if(x==i){
            printf("\nIt is a digit !");
            t=1;
            break;
        }
    }
    if(t==0){
        printf("\nIt is a character !");
    }

    return 0;
}

