//Author Mubashir Ali
//F16-0207
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
class CBT
{
	int T[50],i,counter, cnt, beg,level, n;
	public:
	CBT()
	{
		i=0;
		counter=0;
		beg=0;
	}
	void create();
	void disp();
	void size();
	void Maxvalue();
	void Levels();
	void Parnet_child();
	void Interior_nodes();
	int height();
	void leafnode();
	
};
void CBT::create()
{
cout<<"\t\tTree Creation Mode"<<endl;
cout<<"\nEnter How Many Nodes You Want To Insert:"<<endl;
cin>>cnt;
for(i=0;i<cnt;i++)
{
if(T[i]==i)
{
	cout<<"Value Repeated"<<endl;
	return;
}
cout<<"Enter Node Value:";
cin>>T[i];
counter++;
}	
cout<<"Total Number of Nodes In Tree:"<<cnt<<endl;
cout<<"Compelte Binary Tree\n"<<endl;
for(i=0;i<cnt;i++)
cout<<T[i]<<"  ";
}
void CBT::size()
{
	cout<<"\nSIZE OF TREE IS :"<<counter<<endl;
}
void CBT::Maxvalue()
{
for(i=0;i<cnt;i++)
{
if(T[i]>beg)
{
beg=T[i];	
}	
	
}	
cout<<"\nMaximun Value In Tree :"<<beg<<endl;	
}
 void CBT::Levels()
 {	level=cnt/2;
 	cout<<"Total Levels of Tree is:"<<level<<endl;
//int H = floor( lg(cnt) ) = ceil( (lg(cnt+1) - 1) )
 cout<<"Range of Levles"<<"0-"<<level<<endl;
 }
 void CBT::Parnet_child()
 {	int ch,n;
 	cout<<" 1:Parent:\n2:Left Child \n3:Right Child"<<endl;
 	cin>>ch;
 	if(ch==1)
 	{
 	cout<<"Enter the Index Number of Node For Fining Parent"<<endl;
	cin>>n;
	n=(n-1)/2;
	cout<<"Parent Of Giving Node is :"<<T[n]<<endl;	
	}
	else if(ch==2)
	{
	cout<<"Enter Index For Finding Left Child"<<endl;
	cin>>n;
	n=n*n+1;
 	cout<<"Left Child of Giving  is :"<<T[n]<<endl;
	}
 	else
 	{
 	cout<<"Enter the Index For Finding Rigth Child"<<endl;
	cin>>n;
	n=n*n+2;
	cout<<"Left Child of Giving  is :"<<T[n]<<endl;		
	}
 }
 void CBT::Interior_nodes()
 {
 	 n=(cnt-1)/2;
 	cout<<"Interior Nodes Are:"<<n<<endl;
 }
 int  CBT::height()
 {
 	n=floor(log2(cnt));
	return n;
 }
 void CBT::leafnode()
 {
 	cout<<"Possiable Leaf Nodes:"<<height()+1<<endl;
 }
 main()
{
CBT T;
int ch;
while(1)
{
cout<<"\nMAIN MENU\n"<<endl;
cout<<"1:Create Compelete Binary Tree"<<endl;
cout<<"2:Veiw Total Size of Tree"<<endl;
cout<<"3:Maximum Value In Tree"<<endl;
cout<<"4:Levels"<<endl;
cout<<"5:Parent Child Find"<<endl;
cout<<"6:Interior Nodes "<<endl;
cout<<"7:Height"<<endl;
cout<<"8:Leaf Nodes"<<endl;
cout<<"9:Exit"<<endl;
cout<<"Enter Your Choice"<<endl;
cin>>ch;	
switch(ch)
{
case 1:
T.create();
break;
case 2:
T.size();
break;
case 3:
T.Maxvalue();
break;
case 4:
T.Levels();
break;
case 5:
T.Parnet_child();
break;
case 6:
T.Interior_nodes();
break;
case 7:
cout<<"Height of Tree is:"<<T.height();
break;
case 8:
T.leafnode();
break;
case 9:
cout<<"Code What You Want"<<endl;
getch();
exit(0);
default:
	cout<<"Invalid Chocie"<<endl;
}	
getch();
system("cls");
}
return 0;
	
}
