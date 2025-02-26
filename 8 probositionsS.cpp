#include<stdio.h>
#include<conio.h>
void con()
{
	int i,j;
	printf("truth table of conjunction \n");
	printf("A\t B\t X\t \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t %d\t %d\n",i,j,i&&j);
		}}}
void dis()
{   int i,j;
	printf("truth table of disjunction \n");
	printf("A\t B\t X\t \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t %d\t %d\n",i,j,i||j);
		}}}
	void neg()
	{
		int i;
		printf("truth table of negation \n");
		printf("A\t X\n");
		for(i=0;i<=1;i++)
		{
			printf("%d \t%d\t",i,(1-i));
		}	}
	void imp()
	{
		int i,j;
		printf("truth table of implication \n");
		printf("A\t B\tX\n");
		for(i=0;i<=1;i++)
		{
			for(j=0;j<=1;j++)
		{
		
			if(i==1 && j==0)
		printf("%d\t%d\t%d\t\n",i,j,j);
		else
		printf("%d\t%d\t%d\n",i,j,1);
	}}}
	void bicon()
	{
		int i,j;
		printf("truth table for bicondtional \n");
	printf("A\tB\tX\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			if(i==j)
			printf("%d\t%d\t%d\n",i,j,1);
			else
			printf("%d\t%d\t%d\n",i,j,0);
		}}}
	int main()
	{
		int ch;
		do
	{
			
printf("enter 1 for con,2 for dis,3 for neg,enter 4 for imp,enter 5 for bicon and 6 to exit:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			con();
			break;
			case 2:
				dis();
				break;
			case 3:
				neg();
				break;
			case 4:
				imp();
				break;
			case 5:
				bicon();
				break;
			}}
			while(ch!=6);
		}
				
				
				
				
				
	











