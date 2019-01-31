#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two numbers to add:";
	cin>>a>>b;
	cout<<"Sum is:"<<a-(~b)-1;
}
