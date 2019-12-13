#include<iostream>
using namespace std;
void Quick_Procedure(int A[],int beg,int end,int loc,int N)
{
int left=beg;
int right=end;
loc=beg;
int temp;
while(A[loc]<=A[right] && loc!=right)
right--;	
if(loc==right)
return ;
if(A[loc]>A[right])
{
temp=A[loc];
A[loc]=A[right];
A[right]=temp;
loc=right;
}	
while(A[left]<=A[loc] && left!=loc)
left++;
if(left==loc)
return ;
if(A[left]>A[loc])
{
	temp=A[left];
	A[left]=A[loc];
	A[loc]=temp;
	loc=left;
}
}
void Quick_Sort(int A[],int N)
{
	
	int beg,end,Loc,top=-1;
	int Lower[10],Upper[10];
	if(N>1)
	{
		top++;
		Upper[top]=N-1;
		Lower[top]=0;
	}
	while(top!=-1)
	{
		end=Lower[top];
		beg=Upper[top];
		top--;
		Quick_Procedure(A,beg,end,N,Loc);
		if(beg<Loc-1)
		{
			top++;
			Lower[top]=beg;
			Upper[top]=Loc-1;
		}
		if(Loc<N-1)
		{
			top++;
			Upper[top]=Loc+1;
			Lower[top]=end;
		}
	}
	
}
int main()
{
	int A[]={45,1,22,33,10,2,44,55,66,4,89,3};
	int n=sizeof(A)/sizeof(A[0]);
	//Quick_Sort(A,n);
	cout<<"\nAfter Sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"Workign with with Quick Sort Algortihms"<<endl;
}
