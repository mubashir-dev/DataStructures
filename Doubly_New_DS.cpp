#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *pre;
node()	//For Inititlization 
{
	data=0;
	next=NULL;
	pre=NULL;
}
};
class doubly
{

node *head, *temp,*curr;
public:
doubly()
{
head=NULL;
}
void AddEnd(int x);
void Addbeg(int x);
void Addpos(int loc,int x);
void remove();
void remove_last();
void remove_pos(int pos);
void reverse();
void Dispaly();	
};
void doubly::Addbeg(int x)
{
temp=new node;
temp->data=x;
temp->next=NULL;
if(head==NULL)
{
head=temp;
temp->pre=NULL;
}
else
{
head->pre=temp;
temp->next=head;
head=temp;	

}	
}
void doubly::AddEnd(int x)
{
temp=new node;
temp->data=x;
temp->next=NULL;
temp->pre=NULL;
if(head==NULL)
{
	head=temp;
}
else
{
curr=head;
while(curr->next!=NULL)	
curr=curr->next;
curr->next=temp;
temp->pre=curr;
}
}
void doubly::Addpos(int loc,int x)
{
int i=1;
node *temp2=new node;
temp=new node;
curr=head;
for(i=1;i<loc;i++)
curr=curr->next;
temp->data=x;
if(loc==1)
{
	temp->pre=NULL;
	temp->next=head;
	head->pre=temp;
	head=temp;

}
else
{
temp2=curr->next;
curr->next=temp;
temp->pre=curr;
temp->next=temp2;
temp2->pre=temp;
}
}
void doubly::Dispaly()
{
if(head==NULL)
{
cout<<"\nList is Empty"<<endl;
return ;
}
else
{
curr=head;
cout<<"\nFORWARD MANNER\n"<<endl;
while(curr!=NULL)
{
cout<<curr->data<<"<-->";
curr=curr->next;	
}	
cout<<"NULL";
}	
}
void doubly::remove()
{
node *rm=head;
if(head==NULL)
{
cout<<"Nothing to Delete"<<endl;
}
else
{
node *rm=head;
head=head->next;
head->pre=NULL;
delete rm;
}
}
void doubly::remove_last()
{
curr=head;
while(curr->next!=NULL)	
curr=curr->next;
curr->pre->next=NULL;
temp=curr;
temp->pre=NULL;
delete curr;

}
void doubly::remove_pos(int pos)
{
int i=1;
curr=head;
for(i=1;i<pos;i++)
curr=curr->next;
curr->pre->next=curr->next;
curr->next->pre=curr->pre;
delete curr;
}
void doubly::reverse()
{
temp=head;
if(temp==NULL)
{
	cout<<"Nothing To Reverse"<<endl;
}
else
{
while(temp->next!=NULL)
temp=temp->next;
while(temp->pre!=NULL)
{
cout<<temp->data<<"<-->";
temp=temp->pre;	
}
cout<<"NULL";
cout<<"\n";
}
}
int main()
{
doubly d;
d.Addbeg(101);
d.remove();
d.Dispaly();
cout<<"\n\n"<<"AFTER REVERSE\n"<<endl;
d.reverse();
	return 0;
}
