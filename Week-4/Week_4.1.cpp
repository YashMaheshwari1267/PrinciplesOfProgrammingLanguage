#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter length of array:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	int large=a[0],sec_lar=a[0];
	for(int i=1;i<n;i++)
	{
		if(large<a[i])
		{
			sec_lar=large;
			large=a[i];
		}
		else if(sec_lar<a[i] && a[i]!=large)
			sec_lar=a[i];
	}
	cout<<"Second largest number in array is:"<<sec_lar;
return 0;	
}
