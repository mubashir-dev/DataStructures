#include<iostream>
#include<iomanip>
using namespace std;
class stack
{
int *Arr,*disp,size,top;
int Arr=new int[size];
int disp=new int[size];
char operator,char symbol;
public:
~stack()
{
	delete Arr;
}
stack()
{
	top=-1;
}
void size();
void pop();
void push(char);
int is_operator(char);
int precd(char);
void Disp();
void input();
};
int stack::is_operator(char opr)
{
if(opr=='^'||opr=='*'||opr=='/'||opr=='+'||opr=='-')
return 1;
else 
return 0;	
}
int stack::precd(char sym)
{
if(sym=='^')
return 3;
else if(sym=='/'||sym=='*')
return 2;
else if(sym=='+'||sym=='-')
return 1;
else 
return 0;
}
void push(char sym)
{
if(top==size)
{
	cout<<"Stack Is Full"<<endl;
}
if(top==-1)
{
top++;
Arr[top]=sym;	
}	
else 
Arr[top]=sym;
}
void stack::size()
{
	cout<<"Enter the Size for Array"<<endl;
	cin>>size;
}
void stack::pop()
{
if(top==-1)
{
	cout<<"Stack is Underflow"<<endl;
	return ;
	}	
else
{
	Arr[top]=top--;
}
}
void stack::Disp()
{
	cout<<"Expression After Conversion"<<endl;
	while(disp[i]=!\0)
	{
		cout<<disp[i];
	}
}
void stack::input()
{
	cout<<"Enter the Element For Post Fix Conversion"<<endl;
	gets(infix);
}
void stack::convert()
{
while(infix!='/0')
{
char temp=infix[i];	
	
}
}
