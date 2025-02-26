// programs to compute a power n
#include<stdio.h>
#include<conio.h>
int power(int b,int n);
int main()
{
	int b,n,result;
	printf("Enter base number \n");
	scanf("%d",&b);
	printf("enter power number \n");
	scanf("%d",&n);
	result=power(b,n);
	printf("%d^%d=%d",b,n,result);
	
}
int power(int b,int n)
{
	if(n==0)
	return 1;
	else
	return (b*power(b,n-1));
}
