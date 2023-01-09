//C program to check given number is prime or not

#include <stdio.h>
int main() {
    int num;
    int t=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            printf("Number is not prime !");
            t=1;
            break;
        }
        if(t==0){
            printf("Number is prime !");
        }
    }
    return 0;
}