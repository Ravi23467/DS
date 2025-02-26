//programs to implement ceiling and floor functions
#include<stdio.h>
int floor(float);
int ceil(float);
int main()
{ 
    float num;
	printf("enter the floating number: ");
	scanf("%f",&num);
	int x=ceil(num);
	int y=floor(num);
	printf("the ceil value is:%d",x);
	printf("\n the floor value is:%d",y);
	return 0;
}
int floor(float num)
{ if(num>0)
	return (int)num;
	else return (int)num-1;
}
int ceil(float num)
{	if(num>0)
	return(int)num+1;
	else
	return(int)num;
}
















