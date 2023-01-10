//Write a program in C to print the Fibonacci series

int main()
{
    int n1=0,n2=1,n3,l;
    printf("Enter a number: ");
    scanf("%d",&l);
    printf("%d %d",n1,n2);
    for(int i=0;i<l;i++){
        n3 = n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    } 
    return 0;
}

//Recursive

#include <stdio.h>
int fibonacci(int n){
    if(n==0 || n==1){
      return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
    printf("%d ",fibonacci(i));
    }
    return 0;
}