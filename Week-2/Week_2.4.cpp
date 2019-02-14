#include<iostream>
using namespace std;

int main()
{
	char x;
	int a;
	cout<<"Enter a character:";
	cin>>x;
	a=(int)x;
	if(a>=65 && a<=90)
		cout<<"It is Capital letter";
	else if(a>=97 && a<=122)
		cout<<"It is Small case letter";
	else if(a>=48 && a<=57)
		cout<<"It is a Digit";
	else
		cout<<"It is a Special symbol";			
return 0;	
}
