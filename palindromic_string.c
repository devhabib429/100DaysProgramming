//Write a program for palindromic string
#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    int l=0;
    int i;
    char temp;
    char s1[10];
    printf("Enter a string :");
    scanf("%s",s);
    // s1=s;
    printf("\nEntered string is %s",s);
    for(i=0;s[i]!='\0';i++){
        l++;
    }
    for (i = 0; s[i] != '\0'; i++) {
        s1[i] = s[i];
    }
    s1[i] = '\0';
    printf("\nLength of sting is %d",l);
    for(i=0;i<l/2;i++){
        temp = s[i];
        s[i]=s[l-i-1];
        s[l-i-1] = temp;
    }
    printf("\nReverse string is %s",s);
    printf("\nS1 string is %s",s1);
    if(strcmp(s1,s)==0){
        printf("\nString is Palindrom !");
    }
    else
    {
        printf("\nString is not Palindrom !");
    }
    return 0;
}

