#include<iostream>
using namespace std;

int main()
{
	int n,r,sum=0;
	cout<<"Enter a number of terms in fibonacci series:";
	cin>>n;
	int a=0,b=1,c;
	if(n==0 || n==1)
	{
		cout<<a;
	}
	else
	{
		cout<<a<<"\t"<<b<<"\t";
		for(int i=2;i<n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			cout<<c<<"\t";
		}
	}
return 0;	
}
