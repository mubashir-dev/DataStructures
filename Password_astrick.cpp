#include<iostream>
#include<conio.h>
#include<cstring>
#define eneter 13
using namespace std;
int main()
{
	string passworrd;
	char pwd[100];
	char ch;
	//int n=strlen(pwd);
	int i=0;
	cout<<"Enter Your Password::";
	while(1)
	{
		
		system("color 2");
		ch=getch();
		if(ch==eneter)
		{
			pwd[i]='/0';
			break;		
		}
		else if(ch==8)
		{
			if(i>0)
			{
				i--;
				cout<<"\b \b";
			}
		}
		else if(ch==9||ch==32)
		{
			continue;
		}
		else
		{
			pwd[i]=ch;
			i++;
			cout<<"*";
		}
	}
	passworrd=pwd[i];
	cout<<"\nYour Password:-";
	for(int i=0;i<strlen(pwd)<0;i++)
	{
	cout<<passworrd;	
	}
	cout<<"Passwod Lenght:"<<i<<endl;
	return 0;
}
