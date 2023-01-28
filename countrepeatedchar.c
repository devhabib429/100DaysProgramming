//C program to remove repeated character from string.
#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    int i,j,k,len;
    printf("Enter a string : ");
    scanf("%[^\n]",c);
    printf("\nString is %s ",c);
    len = strlen(c);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(c[i]==c[j]){
                for(k=j;j<len;k++){
                    c[k] = c[k+1];
                }
                len--;
                j--;
            }
        }
    }
    printf("\nNow String is %s ",c);
    return 0;
}

