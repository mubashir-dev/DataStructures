//Author Mubashir Ali
// ---TechAbbott
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<conio.h>
#include<windows.h>
#include<stack>
#include<queue>
using namespace std;
struct tnode
{
int data;
tnode *right;
tnode *left;	
};
class Tree
{
tnode *root;
int counter;
public:
Tree()
{
	root=NULL;
	counter=0;
}
int insert(int);
int Disp();
void pre(tnode*);
void inorder_stack();
void pre_order_stack();
void order_stack();
void levelorder();
void Total_Size();
void search(int);
tnode* findmax(tnode*);
tnode* Delete(tnode* , int);
};
tnode * Tree::findmax(tnode* curr)      //For Delete Function case -3
{
	if(curr==NULL)
	{
		cout<<"Tree is NULL"<<endl;
	}
	else
	{
		while(curr->left!=NULL)
		{
			curr=curr->left;
		}
	}
	return curr;
}
tnode* Tree::Delete(tnode *curr ,int key)
{
	if(curr==NULL)
	{
		cout<<"Nothing In Tree"<<endl;
		//return;
	}
	if(curr->data>key)
	{
	curr->left=Delete(curr->left,key);
	}
	
	
		if(curr->data<key)
		{
			curr->right=Delete(curr->right,key);
		}
	
	else
	{
	if(curr->left ==NULL && curr->right==NULL)	
		{
			tnode *current=root;
			delete current;
			root=NULL;
		}
	else if(curr->left==NULL)
	{
					tnode *current=root;
					root=root->right;
					delete current;

		
	}
	else if(curr->right==NULL)
	{
					tnode *current=root;
					root=root->left;
					delete current;
	}
	else
	{
			tnode *temp=findmax(root->right);
			root->data=temp->data;
			root->right=Delete(curr->right,temp->data);
	
	
	}
	return root;
	}
}
void Tree::pre_order_stack()
{
stack<tnode*> s;
bool done=false;

if(root==NULL)
{
cout<<"Tree is Empty"<<endl;
return ;	
}	
tnode *curr =root;
s.push(curr);
while(!s.empty())
{
curr=s.top();
cout<<curr->data<<" ";
s.pop();
if(curr->right!=NULL)
{
s.push(curr->right);

}
if(curr->left!=NULL)
{
s.push(curr->left);

}
}		
}

void Tree::levelorder()
{	
	queue<tnode*> que;
	cout<<"Level Order Traversel"<<endl;
	if(root==NULL)
	{
		cout<<"Tree  is Empty"<<endl;
		return ;
	}
	else
	{
	//tnode *current=root//
	tnode *curr=root;
		que.push(curr);
	while(que.size()!=0)
	{
		curr=que.front();
		que.pop();
		cout<<curr->data<<"---->"<<endl;
		if(curr->left!=NULL)
		{
			que.push(curr->left);
		}
		if(curr->right!=NULL)
		{
			que.push(curr->right);
		}
	//	que.pop();
	}
}
}
void Tree::inorder_stack()
{	cout<<"----------------Inorder Traversal-----------------"<<endl;
	int chk=0;
	tnode *curr=root;
	stack<tnode*> S;
	bool done=false;
	S.push(curr);
	while(!done)
	{
	if(curr)
	{
		S.push(curr);
		curr=curr->left;
	}	
	else
	{
		if(S.empty())
		{
		done=true;
		}
		else
		{
		curr=S.top();
		S.pop();
		cout<<curr->data<<" ";
		curr=curr->right;
		}
	}	
	/*cout<<"Total tnode Visited:"<<chk<<endl;	
	getch();*/
	
}
}
int Tree::insert( int x)
{
tnode *parent;
tnode *temp=new tnode;
temp->data=x;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{	counter++;
	root=temp;
	cout<<"Root:  "<<root->data<<endl;
	return(true);
}
else
{
tnode *curr=root;
while(curr!=NULL)
{
parent=curr;
if(curr->data==x)
{
	cout<<"Value Already Exist"<<endl;
	return 0;
}
else if(curr->data>x)
curr=curr->left;
else
curr=curr->right;
	
				} }
if(parent->data<x)
{

parent->right=temp;
cout<<"Right  "<<parent->right->data<<endl;
counter++;
}
else 
{
counter++;
parent->left=temp;
cout<<"Left  "<<parent->left->data<<endl;
return 1;

}
}
void Tree::pre(tnode *s)
{	
	while(s!=NULL)	
	{	pre(s->left);
		cout<<s->data<<"  ";
		pre(s->right);
		return ;
	}
}
int Tree::Disp()
{
cout<<"Inorder Order Traversal:"<<endl;

if(root==NULL)
{
	cout<<"\n\tTree is Empty"<<endl;
	return 0;
}
else
{	
	pre(root);
	return(true);
}
}
void Tree::Total_Size()
{	cout<<"\n";
	cout<<"total size of  tree:"<<counter<<endl;
}
void Tree::search(int key)
{
int pos=0;
tnode *curr=root;
if(root==NULL)
{
	cout<<"Tree Is Empty"<<endl;
	
}
else
{
while(curr!=NULL)
{
if(curr->data==key)
{
	cout<<"Data Found "<<curr->data<<" At Position :"<<pos<<endl;
	return ;
}
else if(curr->data>key)
		
{
		curr=curr->left;
		pos++;
}
else
{
	curr=curr->right;
		pos++;

	}
}
if(curr==NULL)
{
cout<<"Value Not Found In Tree"<<endl;	
}	
}
}
/*void Tree::order_stack()
{
tnode *current=root;
stnode *t=NULL;
bool done=0;
if(root==NULL)
{
cout<<"Tree has Nothing To Show"<<endl;
return ;	
}	
else
{
while(!done)
{
	if(current!=NULL)
	{
		push(current);
		current=current->left;
	}
	else
	{
	if(!isempty())
	{
	current=pop(&t);	
	cout<<current->data<<" ";
	current=current->right;
	}	
		
		
	}
}
}	
}*/
int main()
{
SetConsoleTitle("Binary_Search_Tree_Developed By TechAbbott");
cout<<"\n\t\tBinary Search Tree"<<endl;
cout<<"\n\n";
Tree T;
tnode *root;
int choice ,value=0;
while(1)
{	system("color 7");
	cout<<"------------------"<<endl;
	cout<<"<Binary Search Tree>"<<endl;
	cout<<"------------------"<<endl;
	cout<<"1:Add tnode"<<endl;
	cout<<"2:Display"<<endl;
	cout<<"3:Inorder Traversal Using Stack"<<endl;
	cout<<"4:PreOrder Traveral Using Stack"<<endl;
	cout<<"5:Level Order Traversal"<<endl;
	cout<<"6:Search "<<endl;
	cout<<"7:Delete"<<endl;
	cout<<"8:Exit"<<endl;
	cout<<"Enter Your Option"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the Value For tnode"<<endl;
			cin>>value;
			T.insert(value);
			break;
		case 2:
			T.Disp();
			break;
		case 3:
			T.inorder_stack();
			break;
		case 4:
		T.pre_order_stack();
		break;
		case 5:
			T.levelorder();
			break;
		case 6:
		cout<<"Enter the Value For Search In Tree"<<endl;
		cin>>value;
		T.search(value);
		break;
		case 7:
			int value;
			cout<<"Enter the value for Deletion"<<endl;
			cin>>value;
			int data<<T.Delete(root,value);
			break;
		case 8:
		{
			char Solog[]="Code The World! Become A Passionate For Changing The World Through \nDigital Revelotion";
			int n=strlen(Solog);
			for(int i=0;i<n;i++)
			{
				system("color 2");
				Sleep(10);
				cout<<Solog[i];
			}
			getch();
			exit(0);
					}
		default:
			cout<<"Invalid Choice"<<endl;
			
	}
	getch();
	system("cls");
}
}
/*int value;
int key[]={10,5,19,2,11,-2,6,8};
//{9,7,2,8,21,-99,1,8,5,3,455,789,101,22,2333,4545,1021,3426,4520,4444,12,19,16,10,1,22,12,33,44,55,55,88,99,45,77,99,78,77,88,99,5555,22222,222222};
int n=(sizeof(key)/sizeof(*key));
for(int i=0;i<n;i++)
{
	T.insert(key[i]);
}
//T.inorder_stack();
cout<<"\n\n";
//T.inorder_stack();
//T.Total_Size();
//T.Disp();
//cout<<"\nSize of Array:"<<sizeof(*key)<<endl;/
//cout<<"\nSize of Array:"<<sizeof(key)<<endl;
//getch();
//cout<<"Enter the Number For SearCH IN tREE"<<endl;
//cin>>value;
//T.search(value);
//getch();
//return 0;	
}
//Stack Functions If We Manually Created Stack //
/*bool isempty()
{
if(top==NULL)
{
return true;	
}	
else
false;
}	
int push(tnode * x)
{
stnode *temp=new stnode;
temp->data=x;
temp->next=NULL;
if(top==NULL)
{
top=temp;	
}	
else
{
	top->next=temp;
	top=temp;
}
};
tnode * pop(stnode **s)
{	tnode *res;
	if(top==NULL)
	{
		cout<<"Nothing To POP"<<endl;
		
	}
	else
	{
	top=*s;
//	stnode* curr=top;
	res=top->data;
	*s=top->next;
	delete top;
	return res;
	
	}
};
*/
