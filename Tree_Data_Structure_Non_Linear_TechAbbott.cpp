#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
	node *right;
	node*left;
	int info;
};
node* Insert(node*,int);
node* create(int);
bool search(node*,int);
class BST
{
//node *root;
public:
void disp(node*);
void Delete();	
void size();	
};
node* create(int x)
{
node* temp=new node;
temp->info=x;
temp->right=NULL;
temp->left=NULL;
return temp;	
}
node *Insert(node *root,int info)
{
if(root==NULL)
{
	root=create(info);
	cout<<"Value Inserted At Root"<<endl;
}
else if(root->info==info)
{

	cout<<"Value Alredy Exsit"<<endl;
	//return;
	}
else
{
if(info<=root->info)
{
root->left=Insert(root->left,info);	
cout<<"Value Inserted At Left SubTree"<<endl;
}
else
root->right=Insert(root->right,info);	
cout<<"Value Inserted At Right SubTree"<<endl;
}	
return root;
}
bool search(node *root,int key)
{
if(root==NULL)
{
cout<<"Tree is Empty"<<endl;	
}	
	
}
void BST::disp(node*curr)
{
if(curr!=NULL)
{
cout<<"Tree Is Empty"<<endl;	
}	
else
{
cout<<curr->info<<" ";
disp(curr->left);
disp(curr->right);	
}
	
	
}
main()
{
BST s;
node *root=NULL;
root=Insert(root,44);
root=Insert(root,55);
root=Insert(root,56);
root=Insert(root,10);
s.disp(root);
//root=Insert(root,10);
//root=Insert(root,100);
return 0;	
}
