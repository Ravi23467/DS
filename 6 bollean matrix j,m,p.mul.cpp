#include<stdio.h>
#include<stdlib.h>
int main()      //Bollean matrix join,meet,product
{
int a[10][10],r1,c1,r2,c2,b[10][10],c[10][10],d[10][10],e[10][10],i,j,k;
printf("enter the first matrix row and coulmn :\n");
scanf("%d%d",&r1,&c1);
printf("enter the first matrix:\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		scanf("%d",&a[i][j]);
	}
} printf("enter the second matrix row and coulmn\n");
scanf("%d%d",&r2,&c2);
printf("enter the second matrix\n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		scanf("%d",&b[i][j]);
	}} printf("join of two matrix :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			d[i][j]=a[i][j]||b[i][j];
			printf("%d\t",d[i][j]);
		} printf("\n");
	} printf("meet of two matrix :\n");
	for(i=0;i<r1;i++)
	{ 
	for(j=0;j<c1;j++)
	{
		e[i][j]=a[i][j] && b[i][j];
		printf("%d\t",e[i][j]);
	} printf("\n");
	}
  if(c1!=r2)
{
	printf("matrix prdouct is not possible");
	exit(0);
}
 for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		c[i][j]=0;
		for(k=0;k<c1;k++)
		{
			c[i][j]=c[i][j] || a[i][k] && b[k][j];
		}
	}
}  printf("the resultant matrix is :\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		printf("%d\t",c[i][j]);
	} printf("\n");
}
return 0;
}


