#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[20],s2[20];
	cout<<"Enter String:";
	gets(s1);
	cout<<"Enter word to count:";
	gets(s2);
	int l1=strlen(s1),l2=strlen(s2);
	int count=0;
	for(int i=0;i<=l1-l2;i++)
	{
		int found=1;
        for(int j=0;j<l2;j++)
        {
            if(s1[i+j]!=s2[j])
            {
                found=0;
                break;
            }
        }
        if(found==1)
        	count++;
	}
	cout<<"No. of Occurence:"<<count<<endl;
	return 0;	
}

