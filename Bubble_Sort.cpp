//Author Mubashir Ali
// TechAbbott
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Sort_Search
{
int *Array,size,n;

public:
	Sort_Search()
	{
		size=0;
	}
~Sort_Search()
{
	delete Array;
	size=0;
	cout<<"Arrayay Element Is Clear Now"<<endl;
}
void input()
{
cout<<"Enter the Size of Arrayay"<<endl;
cin>>size;
Array=new int[size];
cout<<"Please Enter the Element For Array"<<endl;
for(int i=0;i<size;i++)
{
cout<<"Enter The Element:";
cin>>Array[i];	
}
}
void sorting()
{
int flag=0;
for(int j=0;j<size-1;j++)
{	int t;
	for(int i=0;i<size-1;i++)
	{
			flag++;
			//cout<<"Comparing:"<<A[i]<<":"<<A[i+1]<<"=";
		if(Array[i]>Array[i+1])
		{
		t=Array[i];
		Array[i]=Array[i+1];
		Array[i+1]=t;	
		//cout<<"  Compared "<<endl;
		}
		//else
		//cout<<"Not Compared"<<endl;
	
	}

}
if(flag!=0)
cout<<"Arrayay Is Sorted Now"<<endl;
else
cout<<"Arrayay Is Not Sorted "<<endl;
}
int Searching(int x)
{
int start=0,end=size,mid;
int counter=0;
while(start<=end && x!=mid)
{	
	mid=(end+start)/2;
	if(Array[mid]==x)
	{	//cout<<x<<" Found in Arrayay"<<endl;	 
	//	counter++;
		return mid;
	//	break;	
	}
	 else if(x<Array[mid])
	//ounter++;
	end =mid+1;
	else
		start=mid-1;
}
return -1;
}
void Print()
{
if(size==0)
{
	cout<<"Nothing In Array"<<endl;
}
else
{

for(int i=0;i<size;i++)
cout<<Array[i]<<" ";

}}
};
int main()
{
Sort_Search S ; // Instance  of Class 
while(1)										// Driver_Function
{
int Choice;
cout<<"--------------------"<<endl;
cout<<"Sorting And Searchng"<<endl;
cout<<"--------------------"<<endl;
cout<<"1:Input Array"<<endl;
cout<<"2:Sorted Array"<<endl;
cout<<"3:Search"<<endl;
cout<<"4:Print"<<endl;
cout<<"5:Clear"<<endl;
cout<<"6:Exit"<<endl;
cout<<"Enter Your Choice"<<endl;	
cin>>Choice;
switch(Choice)
{
case 1:
S.input();
break;
case 2:
S.sorting();
break;
case 3:
{
int element;
cout<<"Enter The Element Want To Search"<<endl;
cin>>element;		
int Result=S.Searching(element);
if(Result==-1)
	cout<<element <<"Is Not Found In Array "<<endl;
else
cout<<element <<"Found In Array"<<endl;
}
break;
case 4:	
S.Print();
break;
case 5:
	S.~Sort_Search();
	break;
case 6:
	{
		cout<<"PowerFull Weapon In the World Is Programming"<<endl;
		getch();
		exit(0);
	}
	default:
		cout<<"Wrong Selection"<<endl;
}
getch();
system("cls");	
}
return 0;
}
