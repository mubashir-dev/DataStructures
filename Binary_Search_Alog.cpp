#include<iostream>
using namespace std;
int Binary_Search(int [],int ,int);
int main()
{
	int A[15],n=0,S;
	cout<<"Enter Sorted Members For Array:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>A[i];
		 n++;
	}
	cout<<"Enter The Element For Search In Array"<<endl;
	cin>>S;
	int end=n-1,start=0,mid;
	while(start<=end)
	{
	mid=(end+start)/2;
	if(A[mid]==S)
	{
		cout<<"Element Found At"<<A[S]<<endl;
		return 0;
	}
	else if(S<mid)
	end=mid-1;
	else 
	start=mid+1;	
	}
	//Binary_Search(A,S,n);
	return 0;
}
int  Bianry_Search(int A[],int iteam,int N)
{
	int m,start=0,end=N-1;
	while(start<=end)
	{
		m=(end+start)/2;
		if(A[m]==iteam)
		{
			cout<<"Estartement Found At "<<A[m]<<endl;
		}
		else if(iteam<A[m])
		end=m-1;
		else
			start=m+1;
	}
	return -1;
}
