#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[20],s2[20];
	int flag=0,i,j;
	cout<<"Enter String to check it as Palindrome or not:";
	gets(s1);
	for(i=19,j=0;i>=0;i--,j++)
        s2[j]=s1[i];
    if(strcmp(s1,s2))
        flag=1;
    if(flag!=1)
        cout<<s1<<" is not a palindrome"<<endl;
    else
        cout<<s1<<" is a palindrome"<<endl;
return 0;	
}

