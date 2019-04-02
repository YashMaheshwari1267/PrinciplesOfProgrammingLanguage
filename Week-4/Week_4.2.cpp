#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],c[2][2],d[2][2];
	cout<<"Enter elements of 2x2 A matrix:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			cin>>a[i][j];
	}
	cout<<"Enter elements of 2x2 B matrix:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			cin>>b[i][j];	
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			d[i][j]=d[i][j]+a[i][k]*b[j][k];
		}
	}
	
	cout<<"After addition matrix C is:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			cout<<c[i][j]<<"  ";
		cout<<endl;	
	}
	cout<<"After multiplication matrix D is:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			cout<<d[i][j]<<"  ";
		cout<<endl;	
	}
	
return 0;	
}
