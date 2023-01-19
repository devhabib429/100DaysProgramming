//Write a program for ANAGRAM
#include <stdio.h>
#include <string.h>
int main()
{
   int f=0;
   char s1[10];
   char s2[10];
   int i,j;
   char temp;
   int l1,l2;
   printf("Enter a String1 :");
   scanf("%s",s1);
   printf("Enter a String2 :");
   scanf("%s",s2);
   printf("\nEntered string is %s and %s",s1,s2);
   l1 = strlen(s1);
   l2 = strlen(s2);
    if(l1 != l2){
	    printf("given strings are not anagram");
	 }
   for(i=0;i<l1-1;i++){
       for(j=i+1;j<l1;j++){
           if(s1[i]>s1[j]){
               temp = s1[i];
               s1[i] = s1[j];
               s1[j] = temp;
           }
           if(s2[i]>s2[j]){
               temp = s1[i];
               s1[i] = s1[j];
               s1[j] = temp;
           }
       }
   }
   for(i=0;i<l1;i++){
       if(s1[i]!=s2[i]){
           printf("\nIt is not anagram !");
           f=1;
       }
       break;
   }
   if(f==0){
    printf("\nYeeee it is anangram !");
   }
   
    return 0;
}

