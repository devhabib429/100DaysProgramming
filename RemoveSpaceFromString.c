// Write a Program to remove space for a String ?
#include <stdio.h>

int main()
{
    char s[20];
    int l=0;
    int x;
    int i,j;
    printf("Enter a string : ");
    scanf("%[^\n]s",s);
    printf("\nEntered string is %s",s);
    for(i=0;s[i]!='\0';i++){
       l++; 
    }
    printf("\nLength of string is %d",l);
    for(i=0;i<l;i++){
        if((int)s[i]==32){
            printf("\nEntered string having space !");
            break;
        }
    }
    for(j=i;j<l;j++){
        s[j]=s[j+1];
    }
    printf("\nString without Space is %s",s);
    
    return 0;
}

