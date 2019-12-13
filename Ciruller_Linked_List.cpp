#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
int data;
node *next;	
};
class C_List
{
node *head;
node *last;
public:
C_List()
{
	head=NULL;
	last=NULL;
}
void Insert(int x);
void Show();
};
void C_List::Insert(int x)
{
if(head==NULL)
{
head->data=x;
head->next=NULL;
last=head;	
}
else
{
node *temp=new node;
temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->data=x;
temp->next=head;
head=temp;
last=head;	
}
}
void C_List::Show()
{
node *temp=new node;
temp=head;
while(temp->next!=head)
{
	cout<<temp->data<<"  ";
	temp=temp->next;
	}
}
int main ()
{
C_List l1;
l1.Insert(4);
l1.Show();
return 0;	
	
	
}
