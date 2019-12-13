//Author Mubashir Ali
//TechAbbott
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class stack
{
int *arr= new int[10];
int top,counter;
public:
stack()
{
top=-1;	
counter=0;
}	
void add(int x);
void pop();
void display();
void retTop();
void totalsize();
};
void stack::add(int x)
{

if(top>10)
{
	cout<<"Stack is FULL"<<endl;
}
else
{
counter++;
top++;
arr[top]=x;	
}
}
void stack::pop()
{
if(top==-1)
cout<<"Stack is Empty"<<endl;
else
{
counter--;
int temp=arr[top];
top--;
cout<<temp <<":-has been deleted"<<endl;
}	
}
void stack::display()
{	
int i=0;
if(top==-1)
cout<<"List is Empty"<<endl;
for(i=0;i<counter;i++)
cout<<arr[i]<<endl;
}
void stack::retTop()
{
	cout<<"Top of Stack is: "<<arr[top]<<endl;
}
void stack::totalsize()
{
	cout<<"Total Number of Nodes:"<<counter<<endl;
}
int main()
{
stack s;
int choice;
while(1)
{
cout<<"Main Menu"<<endl;
cout<<"1:PUSH"<<endl;
cout<<"2:POP"<<endl;
cout<<"3:TOP"<<endl;
cout<<"4:Display"<<endl;
cout<<"5:Total Nodes"<<endl;
cout<<"6:Exit"<<endl;
cout<<"Enter Your Choice"<<endl;
cin>>choice;
switch(choice)	
{
	case 1:
		int value;
		cout<<"Enter the Value"<<endl;
		cin>>value;
		s.add(value);
		break;
	case 2:
		s.pop();
		break;
	case 3:
		s.retTop();
		getch();
		break;
	case 4:
		s.display();
		getch();
		break;
	case 5:
		s.totalsize();
		break;
	case 6:
		cout<<"Thanks For Using Our Codes"<<endl;
		getch();
		cout<<"\n\n";
		cout<<"\t  TechAbbott"<<endl;
		cout<<"\nPassion for Developing Best Porgrams"<<endl;
		getch();
		exit(0);
	default:
		cout<<"Invalid Choice"<<endl;
		//return;
}
system("cls");	
}
return 0;
}
