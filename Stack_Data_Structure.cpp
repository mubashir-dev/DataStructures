
#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	node *next;
	int data;
};
class stack
{
node *top,*temp,*curr;
int value;
public:
stack()
{
	top=NULL;
	temp=NULL;
	}
void Push(int x);
void pop();
void show();	

};
void stack::Push(int x)
{
if(top==NULL)
{
	top->data=x;
	top->next=NULL;
}
else
{
curr=new node;
curr=top;
while(curr->next!=NULL)
curr=curr->next;
temp->data=x;
temp->next=NULL;
curr->next=temp;
top=temp;	
}
}	
void stack::show()
{
temp=top;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;	
}		
}
int main ()
{
	stack s;
	s.Push(4);
	s.Push(4);
	s.Push(4);
	s.Push(4);
//	s.show();
	return 0;
}
