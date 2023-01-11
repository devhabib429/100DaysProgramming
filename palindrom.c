//Write a program in C to check whether a number is palindrome or not using recursion.

//121
#include <stdio.h>
int reverse(int n){
    int sum=0,rem;
    while(n!=0){
        rem = n%10;
        sum = (sum*10) + rem;
        n = n/10;
    }
    return sum;
}
int ispalindrom(int n){
    if(n == reverse(n)){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(ispalindrom(n)==1){
        printf("It is palindromic!");
    }
    else{
        printf("It is not palindromic!");
    }
    
    return 0;
}
