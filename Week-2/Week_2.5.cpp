#include<iostream>
using namespace std;

int main()
{
	float cp,sp,profit,loss;
	cout<<"Enter Cost Price of item:";
	cin>>cp;
	cout<<"Enter Selling Price of item:";
	cin>>sp;
	if(sp>cp)
	{
		profit=sp-cp;
		cout<<(profit/cp)*100<<" % profit";
	}
	if(sp<cp)
	{
		loss=cp-sp;
		cout<<(loss/cp)*100<<" % profit";
	}
return 0;	
}
