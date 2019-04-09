#include<iostream>
#include<string>
using namespace std;
void insertSubstring();
void deleteCharacters();
int main()
{
	char choice;
	for(int i=1;i<3;i++)
	{
		cout<<"1. Insert sub-string into main string"<<endl;
		cout<<"2. Delete characters from string"<<endl;
		cout<<"Enter your choice (1 or 2):";
		cin>>choice;
		switch(choice)
		{
			case '1': insertSubstring(); break;
			case '2': deleteCharacters(); break;
		}
	}
return 0;	
}

void insertSubstring()
{
	string s,s1;
	cout<<"Enter Main String:";
	cin>>s;
	cout<<"Enter Sub-String:";
	cin>>s1;
	int pos;
	cout<<"Enter position to add Sub-String:";
	cin>>pos;
	s.insert(pos,s1);
	cout<<"Final String:"<<s<<endl;
}

void deleteCharacters()
{
	string s,s1;
	cout<<"Enter String:";
	cin>>s;
	int start,end;
	cout<<"Enter start and end position to delete characters:";
	cin>>start>>end;
	s.erase(start,end);
	cout<<"Final String:"<<s<<endl;
}
