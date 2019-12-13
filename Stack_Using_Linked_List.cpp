#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node 
{
int data;
node *next;	
};
class stack
{
node *top;
int counter;
public:
	stack()
	{
		top=NULL;
		counter=0;
	}
void push(int x);
void pop();
void reverse();
void peek();
void stacksize();
void traverse();
};
void stack::push(int x)
{
node *temp=new node;
temp->data=x;
temp->next=top;
top=temp;
counter++;		
}

void stack::pop()
{
node *curr=new node;
if(top==NULL)
{
	cout<<"\n\nSTACK IS EMPTY"<<endl;
	return;
}
curr=top;
top=curr->next;
cout<<curr->data<<" has been deleted"<<endl;
delete curr;	
cout<<"\n";
}
void stack::traverse()
{
if(top==NULL)
cout<<"Stack is Empty"<<endl;
node *curr=new node;
curr=top;
while(curr!=NULL)
{
cout<<curr->data<<"->";	
curr=curr->next;
}
cout<<"NULL"<<endl;	
}
void stack::reverse()
{
node *temp=new node;
	
}
void stack::peek()
{
node *temp=new node;
if(top==NULL)
{
cout<<"Stack is Empty"<<endl;
return;
}
else
temp=top;
cout<<"Peek Value is:-"<<temp->data<<endl;		
}
void stack::stacksize()
{
	cout<<"\n\nTotal size of Stack:-"<<counter<<endl;
}
int main()
{
stack s;
int choice;
while(1)
{
cout<<"------------------"<<endl;
cout<<"----Main Menu-----"<<endl;
cout<<"------------------"<<endl;
cout<<"1:-PUSH"<<endl;
cout<<"2:-POP "<<endl;
cout<<"3:-DISPLAY"<<endl;
cout<<"4:-Total Size"<<endl;
cout<<"5:PEAK"<<endl;
cout<<"6:-EXIT"<<endl;
cout<<"-------------------"<<endl;
cout<<"Enter Your Choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the Value want to insert"<<endl;
int value;
cin>>value;
s.push(value);
break;
case 2:
s.pop();
break;
case 3:
s.traverse();
break;
case 4:
s.stacksize();
break;
case 5:
s.peek();
break;
case 6:
exit(0);
default:
cout<<"Invalid Input"<<endl;	
}
getch();
system("cls");	
}
return 0;	
}
