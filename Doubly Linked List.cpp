//Author Mubashir Ali
//TechAbbott
#include<iostream>
using namespace std;
struct node
{
node *next;
node *pre;
int data;
};
class Double
{
private:
node *start,*temp;
int count;
public:
Double()
{
	start=NULL;
	temp=NULL;
	count=0;
}
void Addnode(int);
void Add_start(int);
void Add_pos(int);
void Display();
void Delete_Start();
void Delete_Last();
void Delete_Pos(int);
void search(int key);
void Reverse_list();
void size();
};
void Double::Reverse_list()
{
	
if(start==NULL)
cout<<"Error ! List Is Empty"<<endl;
else
{
node *curr=start;
while(curr->next!=NULL)
curr=curr->next;
//Now We Reach Last Node in Link List//
while(curr->pre!=NULL)
{
	cout<<curr->data<<" ";
	curr=curr->pre;
	}	
}	
	
	
	
}
void Double::Add_pos(int x)
{
node *temp=new node;
temp->pre=NULL;
temp->data=x;
temp->next=NULL;
if(start==NULL)
{
	cout<<"Link List is Empty Go and Add Some Node Than Perform This Function"<<endl;
}
else
{
	int pos;
	cout<<"Enter The Position To Insrt The Node"<<endl;
	cin>>pos;
	if(pos==1)
	Add_start(x);
	else if(pos>count)
	{
		cout<<"Entred Value is Outof Range"<<endl;
	}
	else
	{
	node *curr=start;
	int i;
		for(i=1;i<pos;i++)	
		{
		curr=curr->next;
		}
		node *current=curr->next;
		curr->next=temp->next;
		temp->pre=curr;
		temp->next=current;
		current->pre=temp;
}
}
}
void Double::Delete_Pos(int pos)
{
node*curr=start;
if(start==NULL)
cout<<"Doubly Linked List is Empty"<<endl;
else if(pos==1)
Delete_Start();
else
{
int i=1;
for(i=1;i<pos;i++)
curr=curr->next;
curr->pre->next=curr->next;
curr->next->pre=curr->pre;
cout<<"Deleted Element is:-"<<curr->data<<endl;
count++;
delete curr;
}	
	
}
void Double::Delete_Last()
{
if(start==NULL)	
{
	cout<<"List is Empty"<<endl;
}
if(start->next==NULL)
{
	start=NULL;
}
else 
{
node *curr=start;
while(curr->next!=NULL)
curr=curr->next;
curr->pre->next=NULL;
//curr1->next=NULL;
curr->pre=NULL;
cout<<"Deleted Element is =:"<<curr->data<<endl;
delete curr;
}
}
void Double::Add_start(int x)
{
	temp=new node;
	temp->data=x;
	temp->next=NULL;
	temp->pre=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		
		temp->next=start;
		start->pre=temp;
		start=temp;
		
		
	}
}
void Double::Addnode(int x)
{
temp = new node;
temp->data=x;
temp->pre=NULL;
temp->next=NULL;
if(start==NULL)
{
start=temp;	
count++;
}
else
{
	node *curr=start;
	while(curr->next!=NULL)
	curr=curr->next;
	curr->next=temp;
	temp->pre=curr;
	temp->next=NULL;
	count++;
}
}
void Double::Display()
{
if(start==NULL)
{
	cout<<"List is Empty"<<endl;
	return ;

}
else
{
node *mar=start;
while(mar!=NULL)
{
	cout<<mar->data<<" ";
	mar=mar->next;
}
}	
}
void Double::Delete_Start()
{
if(start==NULL)
cout<<"List is Empty"<<endl;

temp=start;
start=start->next;
start->pre=NULL;
cout<<"\n\n"<<temp->data<<"  has been deleted\n"<<endl;
delete temp;
count--;
}
void Double::search(int key)
{
int flag=0;
int i=1;
node *temp=start;
while(temp->next!=NULL)
{

if(temp->data==key)
{
flag++;		
cout<<temp->data<<":Value Found At Location "<<i<<endl;
return ;
}
else
temp=temp->next;
i++;	
}
if(flag==0)
{
	cout<<"Data Not In List"<<endl;
}
else
{
	cout<<"Data Found At "<<i<<endl;
}
}
void Double::size()
{
	cout<<"\n\nTotal Nodes:"<<count<<endl;
}
int main ()
{
Double d;
int n,x;
d.Addnode(5);
d.Addnode(8);
d.Addnode(10);
d.Addnode(15);
d.Addnode(0);
d.Addnode(7);
d.Addnode(9);
d.Addnode(999);
d.Add_start(101);
int value;
cout<<"Enter the Value To Store"<<endl;
cin>>value;
d.Add_pos(value);
d.Display();
//cout<<"\nAfter Deletion"<<endl;
//d.Delete_Last();
//d.Delete_Pos(4);
//d.search(8);
//d.Display();
//d.Display();
//cout<<endl;
d.size();
return 0;
}
