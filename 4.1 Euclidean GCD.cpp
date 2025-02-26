//programs to implement Euclidean algorithm
#include<stdio.h>
int findGCD(int,int);
int main()
{
	int a,b,gcd;
	printf("enter the any two number ");
	scanf("%d%d",&a,&b);
	gcd=findGCD(a,b);
	printf("The GCD is%d",gcd);
	return 0;
	
}
int findGCD(int a,int b)
{ 
int q,r=1,gcd;
while(r!=0)
{
	q=a/b;
r=a%b;
if(r!=0)
gcd=r;
a=b;
b=r;	
}
return gcd;
}                                                                                          
