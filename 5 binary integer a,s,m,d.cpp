#include<stdio.h>
#include<conio.h>
int badd(int n1,int n2)
{
	int c;
	while(n2!=0)
	{
		c=(n1&n2)<<1;
		n1=n1^n2;
		n2=c;

	} return n1;
}
int bsub(int n1,int n2)
{
	int c;
	n2=badd(~n2,1);
	while(n2!=0)
	{
		c=(n1&n2)<<1;
		n1=n1^n2;
		n2=c;
	} return n1;
	} 
	int bmul(int n1,int n2)
	{
		int i,res=0;
		for(i=0;i<n2;i++)
		{
			res=badd(res,n1);
			
		}return res;
	} int bdiv(int n1,int n2)
	{
		int i,res,count=0,twoscomp;
		if(n1<n2)
		return count;
		res=n1;
		twoscomp=badd(~n2,1);
		for(i=0;res>0;i++)
		{
			res=badd(res,twoscomp);
			if(res<=0)
			{
				if(res=0)
				count=badd(count,1);
				break;
			}
		else
		count=badd(count,1);
	} return count;
}
	int main()
	{
		int n1,n2,a,s,m,d;
		printf("enter any two binary number\n");
		scanf("%d%d",&n1,&n2);
		a=badd(n1,n2);
		s=bsub(n1,n2);
		m=bmul(n1,n2);
		d=bdiv(n1,n2);
		printf("the sum is %d,difference is %d,product is %d,division is %d",a,s,m,d);
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

