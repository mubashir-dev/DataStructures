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
	{	counter=0;
		head=NULL;
		last=NULL;
	}
	void Add_Front(int);
	void Add_last(int x);
	void remove();
	void remove_last();
	void display();
	void Total_Node();
};
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
void CLL::Add_last(int x)
{
counter++;
node *temp=new node;
temp->data=x;
temp->next=NULL;
if(head==NULL){
	temp->next=head;
	head=temp;
	last=head;
}
else
{
last->next=temp;
last=temp;
last->next=head;
}		
}
void CLL::display()
{
node *curr=head;
if(curr==NULL)
{
	cout<<"Nothing In The List"<<endl;
}
else
{
cout<<"\n";
cout<<"HEAD"<<"-->";
while(curr!=last)
{
	cout<<curr->data<<"-->";
	curr=curr->next;
}	
cout<<curr->data<<"-->";
cout<<"LAST-->HEAD";
}
}
void CLL::remove()
{
counter--;
if(head==NULL)
cout<<"List is Empty"<<endl;
else
{
node *curr=head;
head=head->next;
last->next=head;
delete curr;
}
}
void CLL::remove_last()
{
counter--;
node *curr,*temp2;
curr=temp2=head;
if(head==NULL)
{
	cout<<"List Is Empty Nothing To Delete"<<endl;
}
node *temp=head;
node *temp1;
if(temp->next=head)
{
	head=last=NULL;	
	delete temp;
}
else
{
while(curr->next!=head)
{
temp2=curr;
curr=curr->next;
}
last=temp2->next=head;
delete curr;
}
cout<<curr->data<<" has been deleted "<<endl;
}

void CLL::Total_Node()
{
	cout<<"\n\nTotal Number of Nodes In List Are: "<<counter<<endl;
}
int main()
{
system("color 02");
CLL c;
cout<<sizeof(CLL);
c.Add_Front(101);
c.Add_Front(356);
c.Add_Front(101);
c.Add_Front(555);
c.Add_last(1021);
c.remove_last();
//c.remove_last();
c.display();
//c.Total_Node();
//c.remove_last();
//c.display();
//c.Total_Node();
/*cout<<"------------------------------------------"<<endl;
c.remove_last();
c.display();
c.Total_Node();*/
return 0;	
}
