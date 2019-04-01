#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2,d;
    cout<<"Enter coefficients a, b and c:";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    float realP,imaginaryP;
    if (d>0) 
	{
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real and different"<<endl;
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else if(d==0)
	{
        cout<<"Roots are real and equal"<<endl;
        x1=(-b+sqrt(d))/(2*a);
        cout<<"x1=x2="<<x1<<endl;
    }
    else 
	{
        realP= -b/(2*a);
        imaginaryP=sqrt(-d)/(2*a);
        cout<<"Roots are complex and different"<<endl;
        cout<<"x1="<<realP<<"+"<<imaginaryP<<"i"<<endl;
        cout<<"x2="<<realP<<"-"<<imaginaryP<<"i"<< endl;
    }
return 0;
}
