#include<stdio.h>
int main()
{
int set1[50],set2[50],c[50],k=0;
	int i,j,size1,size2;
	printf("enter the size of the set1 \n ");
	scanf("%d",&size1);
	printf("enter the size of the set2 \n ");
	scanf("%d",&size2);	
	printf("enter the elements of set1 \n");
	for(i=0;i<size1;i++)
	scanf("%d",&set1[i]);
	printf("enter the elements of set2 \n ");
	for(i=0;i<size2;i++)
	scanf("%d",&set2[i]);	
for(i=0;i<size1;i++)
{
    for(j=0;j<k;j++)
	{
		if(c[j]==set1[i])
         break;
   	} if(j==k)
{
c[k]=set1[i];	
k++;
}}
for(i=0;i<size2;i++)
{
	for(j=0;j<k;j++)
	{
		if(c[j]==set2[i])
		break;
	}
	if(j==k)
	{
		c[k]=set2[i];
		k++;
	}
}
printf("union of two set is:\n");
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
return 0;}











