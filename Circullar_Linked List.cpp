#include<iostream>
#include<stdio.h>
using namespace std;
struct node 
{
int data;
node *next;	
};
class CLL
{
node *head,*last;
int counter;
public:
	CLL()
	{
		head=NULL;
		last=NULL;
		counter=1;
	}
	void Add_Front(int);
	void Add_last(int x);
	void Add_pos(int);
	void remove();
	void remove_last();
	void remove_pos();
	void display();
	void Total_Node();
	void search(int);
};
void CLL::Add_pos(int x)
{
	node *temp=new node;
	temp->data=x;
	//temp->next=NULL;
	if(head==NULL)
	{
		temp->next=head;
		head=temp;
		last=head;
	}
	else
	{
	int pos;
	cout<<"Enter the Index for Positonn Between 1-"<<counter<<" for Insertion"<<endl;
	cin>>pos;
	if(pos==1)
	{
		Add_Front(x);
	}	
	else if(pos>counter)
	{
		cout<<"Position Index is Out of Range"<<endl;
	}
	else if(pos==counter)
	{
		Add_last(x);
	}
	else
	{
		node *ptr;
		int i=1;
		node *curr=head;
		while(i<pos)
		curr=curr->next;
		temp->next=curr->next;
		curr->next=temp;
		//temp->next=ptr;
		counter++;
	}}
	
}
void CLL::search(int s)
{
	if(head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else
	{
	node *curr=head;
	while(curr!=last)
	{
	if(curr->data==s)
	{
	cout<<curr->data <<" has Found in List"<<endl;
	return ;	
	}	
	else 
	curr=curr->next;
	}	
		
		
	}
}
void CLL::remove_last()
{
	if(head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else
	{
		node *temp;
		node *curr=head;
		while(curr!=last)
		curr=curr->next;
		curr->next=head;
		cout<<last->data<<" has been Deleted"<<endl;
			delete last;
		last=curr;
		
	
	}
}
void CLL::Add_last(int x)
{
node *temp=new node;
temp->data=x;
temp->next=NULL;
if(head==NULL)
{
temp->next=head;
head=temp;
last=head;
}
else
{
node *curr=head;
while(curr!=last)
curr=curr->next;
last->next=temp;
temp->next=head;
last=temp;
}	
}
void CLL::Add_Front(int x)
{
counter++;
node *temp=new node;
temp->data=x;
temp->next=NULL;
if(head==NULL)
{
	temp->next=head;
	head=temp;
	last=head;
}
else
{
temp->next=head;
head=temp;	
}
}
void CLL::display()
{
if(head==NULL)
{
	cout<<"Nothing In The List"<<endl;
}
else
{
node *curr=head;
cout<<"HEAD"<<"-->";
while(curr!=last)
{
	cout<<curr->data<<"-->";
	curr=curr->next;
}	
cout<<curr->data<<"-->";
cout<<"HEAD";
}
}
void CLL::remove()
{
if(head==NULL)
cout<<"List is Empty"<<endl;
else
{
node *curr=head;
head=head->next;
cout<<curr->data<<"  has been Deleted"<<endl;
delete curr;
}
}
void CLL::Total_Node()
{
	cout<<"\n\nTotal Number of Nodes In List Are:-"<<counter<<endl;
}
int main()
{
CLL c;
c.Add_Front(0);
c.Add_Front(22);
c.Add_Front(11);
c.Add_Front(101);
c.Add_Front(99);
c.Add_Front(0);
c.Add_Front(356);
c.Add_last(1050);
c.remove_last();
c.Add_pos(55);
c.remove();
c.display();
c.Total_Node();
c.search(99);
return 0;	
}
