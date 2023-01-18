//Write a program to find out length of astring without using strlen()
#include <stdio.h>

int main()
{   int i;
    char *a="Habib";
    for(i=0;a[i]!='\0';i++);
    printf("%d",i);

    return 0;
}

