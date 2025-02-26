#include<stdio.h>
void matrix(int arr[][2],int n ,int m);
int main()
{
	int arr[100][2],n,m,i,j;
	printf("enter the number of vertices:");
	scanf("%d",&n);
	printf("enter the number of edges between %d and %d:",n-1,n*n);
	scanf("%d",&m);
	printf("enter the directed edges between the vertices:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&arr[i][j]);
		if(arr[i][j]>n)
		{
			printf("invalid edge reenter the edge");
			scanf("%d",&arr[i][j]);
		}}
		matrix(arr,n,m);
	}
	void matrix(int arr[][2],int n,int m)
	{
		int adj[n][n],i,j;
		for(i=0;i<n+1;i++)
		{
			for(j=0;j<=n;j++)
			{
				adj[i][j]=0;
			}}
			for(i=0;i<m;i++)
			{
				int x=arr[i][0];
				int y=arr[i][1];
				adj[x][y]=1;
			} printf("the adjancency matrix of the given edges is:\n");
			for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
		{
			printf("%d",adj[i][j]);
		} 
		printf("\n");
	}}
	
