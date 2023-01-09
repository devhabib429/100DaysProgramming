//Write a program in C to check whether an integer is Armstrong number or not.

#include <stdio.h>

int armstrong(int num) {
    int sum = 0;
    int n = num;
    while (num > 0) {
        sum = sum + (num % 10)*(num % 10)*(num % 10);
        num /= 10;
    }
    if(n == sum){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    armstrong(num)?printf("\nNumber is Armstrong !"):printf("\nNumber is not Armstrong !");
    return 0;
}
