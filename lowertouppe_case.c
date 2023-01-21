// Write a Program to convert from LowerCase to UpperCase for a String ?
#include <stdio.h>
int main()
{
    char s[20];
    int l=0;
    char c;
    int x;
    int i,j;
    printf("Enter a string : ");
    scanf("%[^\n]s",s);
    printf("\nEntered string is %s",s);
    for(i=0;s[i]!='\0';i++){
       s[i] = s[i]-32; 
    }
    printf("\nString Capitilize is %s",s);
    
    return 0;
}

