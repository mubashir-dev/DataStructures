#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char  A[4][10],B[10];
int i,j;
cout<<"Enter The Names 5:"<<endl;
for(i=0;i<5;i++)
gets(A[i]);

for(int round=0;round<5;round++)
{	
	for(i=i+1;i<5;i++)
	{
		if(strcmp(A[i],A[i+1])>0);
		{
		
				strcpy(B,A[i]);
				strcpy(A[i],A[i+1]);
				strcpy(A[i+1],B);	
			
		}	
	}
}
cout<<"Names In Dicitionary Order"<<endl;
for(int j=0;j<5;j++)
puts(A[j]);
return 0;	
}
