// C program to count vowel vowels and constant in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i,j,len=0,vowel=0,constant=0;
	printf("Please enter a string : ");
	scanf("%[^\n]", str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
		vowel++;
		}
		else if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122)){
		    constant++;
		}
	}

	printf("\nVowel string is : %d",vowel);
	printf("\nConstant string is : %d",constant);

    return 0;
}
