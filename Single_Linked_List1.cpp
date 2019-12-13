#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
int data;
node* next;	

};
class List
{
node * Head,*temp,*tail;
public:
List()
{
	Head=NULL;
	temp=NULL;
	tail=NULL;
}
void AddEnd(int x);
void Addbeg(int x);
void disp();
void Delete(int x);
void Inset_Loc(int loc,int x);
void remove();
void Delete_Loc(int loc);
void Delete_End();
void search(int key);
void Swap_List(int p,int q);
void Reverse();
void Sort();
};
void List::Sort()         //Use Bubble Sort Alogrithm For Sorting But If u have heavy Data Use Quick Sort 
{
	if(Head==NULL)
	{
		cout<<"Linked List is Empty"<<endl;
	}
	else
	{
		node *i,*j;
	//	i=Head;
		for(i=Head;i->next!=NULL;i=i->next)
		{
			for(j=i->next;j->next!=NULL;j=j->next)
			{
				if(i->data>j->data)
				{
					int temp=i->data;
					i->data=j->data;
					j->data=temp;
				//	cout<<"Values Swipped:"<<j->data<<endl;
				}
				//cout<<"Values Not Swipped:"<<i->data<<endl;
			}
		}
	//	disp();
	}
}
void List::AddEnd(int x)
{
	
if(Head==NULL)
{
	Head=new node;
	Head->data=x;
	Head->next=NULL;
}
else
{
tail=Head;
while(tail->next!=NULL)
tail=tail->next;
temp =new node;
temp->data=x;
temp->next=NULL;
tail->next=temp;
}
};
void List::disp()
{
 temp=new node;
temp=Head;
while(temp!=NULL)
{
	cout<<temp->data<<"  ";
	temp=temp->next;
}
};
void List::Addbeg(int x)
{
node *Add=new node;
Add->data=x;
Add->next=Head;
Head=Add;
};
void List::Delete(int x)
{
node *Del=new node;
Del=Head;
if(Head==NULL)
{
	cout<<"List is Empty"<<endl;
}
else
{
if(Head->data==x)
{
Head=Head->next;
delete Del;
}
else
cout<<"Value Not in List"<<endl;
}
};
void List::remove()
{
if(Head==NULL)	
{
cout<<"List is Empty"<<endl;
}
else
{
node *temp=new node;
temp=Head;
Head=Head->next;
delete temp;
}
	
cout<<temp->data<<" has been deleted"<<endl;
	
	
};
void List::Inset_Loc(int loc,int x)
{
int flag=0;
node *current=new node;
node *temp=new node;
node *ptr=new node;
if(Head==NULL)
{
	cout<<"List is Empty"<<endl;
	
}
else if(loc==1)
{
temp=Head;
Head=Head->next;
temp->data=x;
temp->next=NULL;
temp->next=Head;
Head=temp;
flag++;	
}
else
{

current=Head;
int i=1;
for(i=1;i<loc;i++)
	current=current->next;

ptr=current->next;
current->next=temp;
temp->data=x;
temp->next=ptr;
;}	
if(flag==0)
cout<<"Data Not Added To List"<<endl;
else
cout<<"Data Successfully Added To List"<<endl;
}
void List::Delete_Loc(int loc)
{
node *temp,*ptr,*current,*ptr2 =NULL;
temp=Head;
if(Head==NULL)
{
	cout<<"List is Empty"<<endl;
}
if(loc==1)
{	
Head=Head->next;
delete temp;
}	
else
{
for(int i=1;i<loc;i++)
temp=temp->next;
current=temp->next;
temp->next=current->next;
delete temp;	
	}
};
void List::Delete_End()
{
node *temp,*temp2;
temp=Head;
while(temp->next!=NULL)
{
temp2=temp;
temp=temp->next;
}
temp2->next=NULL;
//Head=Head->next=NULL;
cout<<"Dleted Elemnt is:-"<<temp->data<<endl;
delete temp;	

}
void List::search(int key)
{
int i=1;
int flag=0;
node*curr=Head;
while(curr!=NULL)
{
if(curr->data==key)
{
flag++;
break;	
}
else
curr=curr->next;	
i++;
}
if(flag==0)
cout<<"Not Found In List\n"<<endl;
else
cout<<curr->data<<"  Found at Location "<<i<<endl;

//if(curr->data!=key)
}
void List::Swap_List(int n,int loc)
{
node*R,*P;
R=P=Head;
for(int i=1;i<n;i++)
R=R->next;
for(int j=1;j<loc;j++)
P=P->next;
int t;
t=R->data;
R->data=P->data;
P->data=t;	
}
void List::Reverse()
{
node *curr;
node *next,*pre=NULL;
while(curr->next!=NULL)
{
next=curr->next;
curr->next=pre;
pre=curr;
curr=next;	
}	
//cout<<"Reversed Linked List"<<endl;	
}
int main()
{
	List l1;
	l1.Addbeg(101);
	l1.Addbeg(202);
	l1.Addbeg(302);
	l1.Addbeg(402);
	l1.Addbeg(505);
	l1.Addbeg(6);
	l1.Addbeg(7);
	l1.Addbeg(8);
	l1.Addbeg(9);
	l1.Addbeg(10);
	l1.Addbeg(101);
//	l1.AddEnd(105);
//	l1.Inset_Loc(1,11);
//	l1.Delete_End();
//		l1.Delete_End();
//	l1.Delete_End();
//	l1.Delete_End();
l1.Sort();
//	l1.Sort();
	l1.disp();
//	l1.Inset_Loc(10,99);
//l1.Swap_List(4,8);
	//l1.Delete_End();
//   l1.Delete_Loc(9);l1.search(77);
//	l1.Reverse();
//	cout<<"Reverde Linked List\n"<<endl;
//	l1.disp();
//	cout<<"\n";
	return 0;
}
