//Write a program to find out occurance of char in String
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int i,j,l=0,count=0;
    char s[20];
    char c;
    printf("Enter a string : ");
    scanf("%s",s);
    printf("\nEnter a char need to remove : ");
    getchar();
    scanf("%c",&c);
    for(i=0;s[i]!='\0';i++){
        l++;
    }
    //Habib
    for(i=0;i<l;i++){
        if(s[i]==c){
           count++;
        }
    }
    printf("\nOccurance of char in string : %d",count);
    return 0;
}

