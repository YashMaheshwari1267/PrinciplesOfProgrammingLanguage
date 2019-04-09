#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the length of array:";
	cin>>n;
	int a[n];
	cout<<"Enter Array elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> pst,ntv,evn,odd;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			pst.insert(pst.end(),a[i]);
		if(a[i]<0)
			ntv.insert(ntv.end(),a[i]);
		if(a[i]%2==0)
			evn.insert(evn.end(),a[i]);
		if(a[i]%2 != 0)
			odd.insert(odd.end(),a[i]);			
	}
	cout<<"\nPositive numbers:";
	for(int i=0;i<pst.size();++i)
		cout<<pst[i]<<"  ";
	cout<<"\nNegative numbers:";	
	for(int i=0;i<ntv.size();++i)
		cout<<ntv[i]<<"  ";
	cout<<"\nEven numbers:";		
	for(int i=0;i<evn.size();++i)
		cout<<evn[i]<<"  ";
	cout<<"\nOdd numbers:";		
	for(int i=0;i<odd.size();++i)
		cout<<odd[i]<<"  ";			
return 0;		
}
