// Reverse Integer using Recursive

#include <stdio.h>
void reverse(int n){
    if(n==1){
        printf("%d ",n);
        return;
    }
    printf("%d ",n);
    return reverse(n-1);
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}