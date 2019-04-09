#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	cout<<"Enter String:";
	cin>>s1;
	cout<<"Enter string to find:";
	cin>>s2;
	size_t found=s1.find(s2);
	if(found!=string::npos)
		cout<<"String found at "<<found<<" position."<<endl;
	cout<<"Enter replacing string:";
	cin>>s3;
	s1.replace(found,4,s3);
	cout<<"Final String is:"<<s1<<endl;	
	
return 0;	
}

