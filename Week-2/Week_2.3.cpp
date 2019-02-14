#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number to generate prime numbers upto: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}
		if(flag==0)
			cout<<i<<"\t";	
	}
return 0;	
}
