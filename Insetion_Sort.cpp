#include<iostream>
using namespace std;
void insetion_sort(int [],int);
main()
{
	int Arr[]={41,2,11,3,22,5,44,1};
	cout<<"Before Sorting"<<endl;
	for(int i=0;i<=7;i++)
	cout<<Arr[i]<<"  ";
	insetion_sort(Arr,8);
	cout<<"\nAfter Sorting"<<endl;
	for(int i=0;i<=7;i++)
	cout<<Arr[i]<<"  ";
	return 0;
}
void insetion_sort(int A[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=A[i];
j=i;
while(temp<A[j-1] &&( j>0))
{
A[j]=A[j-1];
j--;
}
A[j]=temp;
}	
	
}
