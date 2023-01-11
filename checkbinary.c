//Write a program in C to check if a number is binary.
//11
#include <stdio.h>
int isbinary(int n){
    int rem,temp=0;
    while(n!=0){
        rem = n%10;
        if(rem!=0 || rem!=1){
            temp=1;
            break;
        }
        n=n/10;
    }
    if(temp==0){
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
    if(isbinary(n)==1){
        printf("It is Binary!");
    }
    else{
        printf("It is not Binary!");
    }
    
    return 0;
}
