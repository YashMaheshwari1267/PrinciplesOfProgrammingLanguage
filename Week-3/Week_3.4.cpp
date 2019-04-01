#include<iostream>
using namespace std;
int main()
{
	int n,num,sum=0,r;
	cout<<"Enter any positive number to check it as Armstrong or Not:";
	cin>>n;
	num=n;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(sum==n)
		cout<<"Armstrong Number";
	else
		cout<<"Not a Armstrong Number";
return 0;
}
