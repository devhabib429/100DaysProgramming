//C program to count Occurrence Of char,digit and special char in String.
#include <stdio.h>

int main()
{
    char c[100];
    int i;
    int alpha=0,numr=0,spc=0;
    printf("Enter a string : ");
    scanf("%[^\n]",c);
    printf("\nString is %s ",c);
    for(i=0;c[i]!='\0';i++){
        if((c[i]>=65 && c[i]<=90) ||(c[i]>=97 && c[i]<=122))
        {
         alpha++;  
        }
        else if(c[i]>=48 && c[i]<=57){
            numr++;
        }
        else if(c[i]>=32 && c[i]<=46){
            spc++;
        }
    }
    printf("\nAlpha in String is %d ",alpha);
    printf("\nNumber in String is %d ",numr);
    printf("\nSpecial char in String is %d ",spc);
    return 0;
}

