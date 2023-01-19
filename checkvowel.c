//Write a program to check vowel or not
#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    printf("Enter a character to check :");
    scanf("%c",&c);
    if(c=='A' || c=='O'|| c=='U' || c=='I'|| c=='E' || c=='a' || c=='o'||c=='e'||c=='u'||c=='i'){
        printf("\nYes it is Vowel !");
    }
    else{
        printf("No It is not vowel !");
    }
    return 0;
}

