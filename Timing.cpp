#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
system("color 2");
int i,sum;
cout<<"\n\n\t\t\t\t\t:-";
for(i=1;i<100;i++)
{
Sleep(10);
cout<<"\n\t\t\t\tLODING:-"<<i<<"%";	
system("cls");
}	
cout<<"\n\t\t\t\tLODING:-"<<i<<"%";	
getch();
return 0;
}
