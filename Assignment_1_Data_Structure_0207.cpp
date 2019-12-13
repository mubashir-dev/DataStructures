#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
struct node
{
char id[10];
char name[20],progm[10],year[10];
node *pre;
node *next;
node()
{
	strcpy(name,"NONE");
	strcpy(progm,"NONE");
	strcpy(year,"NONE");
	strcpy(id,"NONE");
}
};
class doubly_stu
{
node *head;
public:
doubly_stu()
{
	head=NULL;
}
void add_start();
void add_midd(int);
void add_end();
void remove();
void display();
void search(char*);	
};
void doubly_stu::add_start()
{
node *temp=new node;
fflush(stdin);
cout<<"Enter Your Reg_No:-";
gets(temp->id);
cout<<endl;
fflush(stdin);
cout<<"Enter Your Complete Name:-";
gets(temp->name);
 fflush(stdin);
cout<<endl;
cout<<"Enter Your Programme of Study:-";
gets(temp->progm);
fflush(stdin);
cout<<endl;
cout<<"Enter Your Year of Study:-";
gets(temp->year);
cout<<endl;
//------------Assigning Value to The Next And Pre Of Node--------------
temp->next=NULL;
if(head==NULL)
{
	temp->pre=NULL;
	head=temp;
}
else
{
head->pre=temp;
temp->next=head;
head=temp;	
}
}
void doubly_stu::add_end()
{
node *temp=new node;
fflush(stdin);
cout<<"Enter Your Reg_No:-";
gets(temp->id);
cout<<endl;
fflush(stdin);
cout<<"Enter Your Complete Name:-";
gets(temp->name);
 fflush(stdin);
cout<<endl;
cout<<"Enter Your Programme of Study:-";
gets(temp->progm);
fflush(stdin);
cout<<endl;
cout<<"Enter Your Year of Study:-";
gets(temp->year);
cout<<endl;
//------------Assigning Value to The Next And Pre Of Node--------------
temp->next=NULL;
temp->pre=NULL;
if(head==NULL)
{
	head=temp;
}
else
{
node *curr=head;
while(curr->next!=NULL)
curr=curr->next;
curr->next=temp;
temp->pre=curr;	
}	
}
void doubly_stu::add_midd(int pos)
{
node *temp=new node;
int i=1;
fflush(stdin);
cout<<"Enter Your Reg_No:-";
gets(temp->id);
cout<<endl;
fflush(stdin);
cout<<"Enter Your Complete Name:-";
gets(temp->name);
 fflush(stdin);
cout<<endl;
cout<<"Enter Your Programme of Study:-";
gets(temp->progm);
fflush(stdin);
cout<<endl;
cout<<"Enter Your Year of Study:-";
gets(temp->year);
cout<<endl;
//------------Assigning Value to The Next And Pre Of Node--------------
temp->next=NULL;
temp->pre=NULL;
node *curr=head;
while(i<pos)
curr=curr->next;
node *temp2=curr->next;
curr->next=temp;
temp->pre=curr;
temp->next=temp2;
temp2->pre=temp;
}	
void doubly_stu::remove()
{
node *temp;
if(head==NULL)
{
	cout<<"Nothing To Delete"<<endl;
}
else if(head->next==NULL)
{
temp=head;
head=head->next;
temp->next->pre=NULL;
//temp->next=NULL;
head=NULL;
delete temp;
}
else
{
node *curr=head;
while(curr->next!=NULL)
curr=curr->next;
curr->pre->next=NULL;
curr->pre=NULL;
delete curr;
}
}		
void doubly_stu::display()
{
if(head==NULL)
{
	cout<<"\nCurrently List Is Empty"<<endl;
	return;
}
else
{
node *curr=head;
while(curr!=NULL)
{
cout<<"\n"<<endl;
cout<<"--------------------------------------"<<endl;
cout<<"STUDENT ID:-"<<curr->id<<endl;
cout<<"NAME:- "<<curr->name<<endl;
cout<<"PROGRAMME:-"<<curr->progm<<endl;
cout<<"YEAR OF STUDY:-"<<curr->year<<endl;
cout<<"--------------------------------------"<<endl;
curr=curr->next;
}
}	
}
void doubly_stu::search(char* id)
{
if(head==NULL)
{
	cout<<"List Is Empty"<<endl;
}
else
{
node *curr=head;
while(curr!=NULL)
{
if(strcmp(curr->id,id)==0)
{
cout<<"\n"<<endl;
cout<<"----------------------------------"<<endl;
cout<<"Student ID:-"<<curr->id<<endl;
cout<<"Name:- "<<curr->name<<endl;
cout<<"Programme:-"<<curr->progm<<endl;
cout<<"Year Of Study:-"<<curr->year<<endl;
cout<<"-----------------------------------"<<endl;
return ;
}
curr=curr->next;
}
}
cout<<"Sorry Not Found In List"<<endl;	
}
//--------------------Function-Defination-Ended--------------------//
int main()
{
system("color 2");
int choice;
doubly_stu s;
while(1)
{
cout<<"----------------------"<<endl;
cout<<"--Student Informaton--"<<endl;
cout<<"----------------------"<<endl;
cout<<"1:-Add Information First"<<endl;
cout<<"2:-Add Information Last"<<endl;
cout<<"3:-Add Information At Position"<<endl;
cout<<"4:-Delete Information"<<endl;
cout<<"5:-Search Information"<<endl;
cout<<"6:-Display"<<endl;
cout<<"7:-Exit"<<endl;
cout<<"Enter Your Choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
s.add_start();
break;
case 2:
s.add_end();
break;
case 3:
char pos;
cout<<"Enter Position For Insertion"<<endl;
cin>>pos;
s.add_midd(pos);
break;
case 4:
s.remove();
break;
case 5:
char id[10];
fflush(stdin);
cout<<"Enter Student id for Search"<<endl;
gets(id);
s.search(id);	
break;
case 6:
s.display();
break;
case 7:
	cout<<"\t\"Learn The Rules Like Pro So You Can Break Them Like Artist\""<<endl;
	getch();
	exit(0);
default:
	cout<<"\nInvalid Choice"<<endl;
	return 0;
}	
getch();
system("cls");
}
return 0;	
}

