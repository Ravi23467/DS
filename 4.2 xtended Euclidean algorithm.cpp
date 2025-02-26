//programs to implement Extended Euclidean Algorithms
#include<stdio.h>
int printInverse(int,int);
int main()
{
	int a,m;
	printf("enter the any number");
	scanf("%d",&a);
	printf("enter the divisor");
	scanf("%d",&m);
	printInverse(a,m);
	
}
int printInverse(int a,int m)
{
	int q,r=1,s1=1,s2=0,t1=0,t2=1,s,t;
	while(r!=0)
{
	q=a/m;
	r=a%m;
	s=s1-q*s2;
	t=t1-q*t2;
	s1=s2;
	s2=s;
	t1=t2;
	t2=t;
	a=m;
	m=r;
}
s=s1;
t=t1;
printf("s=%d\n",s);
printf("t=%d\n",t);
}
