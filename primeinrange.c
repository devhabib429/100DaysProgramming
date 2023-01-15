//C Program to print Prime Number in a given range
#include<stdio.h>
void main(){
        int i=0,fNum,sNum, temp,temp1=1;
        printf("C Program to Print Prime number in a given range\n");
	printf("Please give the first number: ");
	scanf("%d",&fNum);
	printf("Please give the second number: ");
	scanf("%d",&sNum);
	while(fNum<=sNum){
        temp=0;
        for(i=2;i<=(fNum-1);i++){
		if(fNum%i==0)
		{
            temp=1;
            break;
		}
	}
	if(temp==0)
		printf("%d is  a prime number \n",fNum);
	fNum++;
	}
}

