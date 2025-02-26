#include<iostream>
using namespace std;
int main()
{
	int set1[50],set2[50];
	int size1,size2;
	cout<<"size of the set1 ";
	cin>>size1;
	cout<<"size of the set2 ";
	cin>>size2;
	
	cout<<"enter the elements of set1 ";
	for(int i=0;i<size1;i++)
	cin>>set1[i];
	cout<<"enter the elements of set2 ";
	for(int k=0;k<size2;k++)
	cin>>set2[k];
	int l;
	cout<<"the difference of the two sets is ={";
	for(int i=0;i<size1;i++)
	{
		for(l=0;l<size2;l++)
		{
			if(set1[i]==set2[l])
			{
				break;
			}
		}
		if(l==size2)
		{
			cout<<set1[i]<<",";
		}}
      cout<<"}";
	  return 0;	
	}
		
		
		
	
