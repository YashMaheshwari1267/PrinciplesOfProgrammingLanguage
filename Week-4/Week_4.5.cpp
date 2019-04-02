#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the length of array:";
	cin>>n;
	int a[n],fr[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	int visited=-1;	
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				fr[j]=visited;
			}
		}
		if(fr[i]!=visited)
			fr[i]=count;
	}
	cout<<endl;	
	for(int i=0;i<n;++i) 
    {
     	if(fr[i]!=visited)
     		cout<<a[i]<<" -> "<<fr[i]<<endl;	
	}
return 0;		
}
