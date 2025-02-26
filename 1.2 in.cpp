#include<stdio.h>
int main()
{ 
int set1[50],set2[50];
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
int I[size1];
int k=0;
for(i=0;i<size1;i++)
{
	for(j=0;j<size2;j++)
	{	
	if(set1[i]==set2[j])
	{	
		I[k]=set1[i];
		k++;
		break;
}
}}
 printf("intersection of the two set is ={");
 for(i=0;i<k;i++)
 printf("%d,",I[i]);

 printf("}");
	return 0;}
