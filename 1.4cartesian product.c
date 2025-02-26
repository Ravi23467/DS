#include<stdio.h>
int main()
{
int set1[50],set2[50];
	int i,j,size1,size2;
	printf("enter the size of the set1 ");
	scanf("%d",&size1);
	printf("enter the size of the set2 ");
	scanf("%d",&size2);
	
	printf("enter the elements of set1 ");
	for(i=0;i<size1;i++)
	scanf("%d",&set1[i]);
	printf("enter the elements of set2 ");
	for(i=0;i<size2;i++)
	scanf("%d",&set2[i]);	
printf(" the cartesian product of two set is={ ");
for(i=0;i<size1;i++)
{	for(j=0;j<size2;j++)
	{
		printf("(%d , %d)",set1[i],set2[j]);	

		printf(",");
}}
 printf("}");
	return 0;}
