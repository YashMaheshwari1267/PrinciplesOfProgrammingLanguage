#include<iostream>
using namespace std;
int main()
{
	float x,sum,t,d;
	int n;
	cout<<"Input the Value of x:";
	cin>>x;
	cout<<"Input the number of terms:";
	cin>>n;
	sum=1;t=1;
	for(int i=1;i<n;i++)
	{
	  d=(2*i)*(2*i-1);
	  t=t-t*x*x/d;
	  sum=sum+t;
	}
	cout<<"The sum is:"<<sum<<endl;
return 0;
}
