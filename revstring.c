#include <stdio.h>
#include <string.h>

int main()
{  
    int i;
    char temp;
    char s[20] = "Habib";
    int l = strlen(s);
    printf("%s",s);
    for(i=0;i<l/2;i++){
        
        temp = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = temp;
        
    }
    printf("\n%s",s);
    return 0;
}
