#include<iostream>
using namespace std;
int main()
{
int *arr,size,i,j;
cout<<"Enter the Size of An Arry:";
cin>>size;
arr = new int[size];
cout<<"\nEnter the Element For Dynmaic Array"<<endl;
for(i=0;i<size;i++)
cin>>arr[i];
cout<<"Data Members in Array"<<endl;
for(i=0;i<size;i++)
cout<<arr[i]<<"  ";	
delete arr;
return 0;
}
