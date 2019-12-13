#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
		int data;
	node *next;

};
class cll
{
node *last ,*head;
public:
	cll()
	{
		last=NULL;
		head=NULL;
	}
	void add_start(int);
	void add_last(int);
	void display();
};
void cll::add_start(int x)
{
node *temp=new node;
temp->data=x;
temp->next=NULL;
if(temp==NULL)
{
	temp->next=head;
	head=temp;
	last=temp;
}
else
{
temp->next=head;
head=temp;		
}
}
void cll::display()
{
	node *temp=head;
	while(temp->next!=last)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<temp->data<<"-->";
	cout<<"HEAD";
}
	
int mian()
{
	cll c;
	c.add_start(10);
	c.add_start(5);
	c.display();
	return 0;
}
