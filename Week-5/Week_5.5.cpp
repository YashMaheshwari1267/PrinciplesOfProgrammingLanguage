#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[30],t[30];
   	char *found;
    cout<<"Enter the S string:";
    gets(s);
    cout<<"Enter the string T to be searched:";
    gets(t);
    found=strstr(s,t);
    if(found)
      cout<<"Second String is found in the First String at "<<found-s<<"position.\n";
    else
      printf("1");
	return 0;	
}

