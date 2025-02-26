// program to  calculate power (b,n) modulo m
#include<stdio.h>
#include<conio.h>
int power(int b,int n,int m)
{
	int res=1;
	b=b%m;
	while(n>0)
{
	if(n&1)
	res=(res*b)%m;
	n=n>>1;
	b=(b*b)%m;
	}
	return res;
}
int main()
{
	int b,n,m,result;
	printf("enter the positive integer b: \n");
	scanf("%d",&b);
	printf("enter the positive integer n :\n");
	scanf("%d",&n);
	printf("enter the positive integer m :\n");
	scanf("%d",&m);
	result=power(b,n,m);
	printf("Modulo power is %d",result);
	
}
