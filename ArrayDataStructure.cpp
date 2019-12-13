//Author Mubashir Ali
//TechAbbott
#include<iostream>
#include<conio.h>
using namespace std;
void input();
void print();
void AddE();
void Remove();
void Linear_Search();
void sort();
int n;
int A[0],i,position,element;
//Global Scope
int main()
{	
int option;
while(1)
{
	cout<<"Array Data Strutcure"<<endl;
	cout<<"1:Input"<<endl;
	cout<<"2:Print"<<endl;
	cout<<"3:Insert_Element"<<endl;
	cout<<"4:Remove_Element"<<endl;
	cout<<"5:Linear Search"<<endl;
	cout<<"6:Sort"<<endl;
	cout<<"7:Exit"<<endl;
	cout<<"Enter Your Option"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
		input();
		break;
		case 2:
		print();
		break;
		case 3:
		AddE();
		break;
		case 4:
		Remove();
		break;
		case 5:
		Linear_Search();
		break;
		case 6:
		sort();
		break;
		case 7:
			exit(0);
		default:
			cout<<"Invalid Choice"<<endl;
		
	}
	getch();
	system("cls");
}
return 0;
}
void input()
{
	cout<<"Enter the Size of Array"<<endl;
	cin>>n;
	cout<<"Enter the Memebers of Array"<<endl;
	for(i=0;i<n;i++)
	cin>>A[i];
	cout<<"Values Inserted At Array"<<endl;
}
void AddE()
{
	cout<<"Enter the Element Want To Store in Array"<<endl;
	cin>>element;
	cout<<"Enter the Position Where U Want to store"<<endl;
	cin>>position;
	if(position>n)
	{
		cout<<"Insertion Unsuccessfull Because Of position is Greater then size"<<endl;
		
	}
	else
	{
	for(i=n;i>position;i--)
	{
	A[i]=A[i-1];
	cout<<"Values Shifting:"<<">"<<A[i-1]<<endl;}
	}
}
void print()
{
	cout<<"Element In Array"<<endl;
	for(i=0;i<n;i++)
	cout<<A[i]<<" ";
}
void Remove()
{
	cout<<"Enter the Indix To Remove Store Value"<<endl;
	cin>>position;
	if(position>n)
	{
		cout<<"Deletion Unsuccessfull Because Of position is Greater then size"<<endl;
	}
	else
	{
	
	for(i=position;i<=n;i++)
	A[i-1]=A[i];	
	}
	n--;
}
void sort()
{
int flag=0;
for(i=0;i<n;i++)
{
	for(i=0;i<n;i++)
	{
	
	if(A[i]>A[i+1])
	{	
		//cout<<"Value Swapped"<<" : "<<A[i]<< A[i+1]<<endl;
		int temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
		
	}
	
}
}
if(flag!=0)
	cout<<"Array is Sorted"<<endl;
}
void Linear_Search()
{	int flag=0;
	cout<<"Enter the Value for Searching"<<endl;
	cin>>position;
	for(i=0;i<n;i++)
	{
		flag++;
		if(A[i]==position)
		{
			cout<<position<<" Value Found At "<<A[i]<<endl;
			return ;
		}
	}
	if(flag==0)
	cout<<"Value Not Found In Array"<<endl;
}
