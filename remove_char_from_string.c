//Write a program to find out length of astring without using strlen()
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int i,j,l=0;
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
            for(j=i;j<l;j++){
                s[j]=s[j+1];
            }
            l--;
            i--;
        }
    }
    printf("\n%s",s);
    return 0;
}
