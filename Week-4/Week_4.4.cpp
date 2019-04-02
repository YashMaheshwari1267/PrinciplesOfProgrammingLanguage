#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the length of 1st array:";
	cin>>n;
	cout<<"Enter the length of 2nd array:";
	cin>>m;
	int a[n],b[m],c[n+m];
	cout<<"Enter elements of 1st array:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c[i]=a[i];
	}
	cout<<"Enter elements of 2nd array:";	
	for(int i=0,j=n+1;i<m;i++,j++)
	{
		cin>>b[i];
		c[j]=b[i];
	}
	sort(c,c+n+m);
	cout<<"After sorting array is:";
	for(int i=0;i<n+m;++i) 
        cout<<c[i]<<" ";			
return 0;		
}
