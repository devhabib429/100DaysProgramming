//C program to Replace First Occurrence Of Vowel With ‘-‘ in String.
#include <stdio.h>

int main()
{
    char c[100];
    int i;
    printf("Enter a string : ");
    scanf("%[^\n]",c);
    printf("\nString is %s ",c);
    for(i=0;c[i]!='\0';i++){
        if(c[i]=='a'||c[i]=='o'||c[i]=='u'||c[i]=='e'||c[i]=='i'||c[i]=='A'||c[i]=='O'||c[i]=='U'||c[i]=='I'||c[i]=='E')
        {
            c[i]='-';
            break;
        }
    }
    printf("\n After String is %s ",c);
    return 0;
}

