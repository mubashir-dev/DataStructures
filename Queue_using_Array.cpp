//Author Mubashir ALi
#include<iostream>
#include<windows.h>
#include<conio.h>
//#include<conio>
using namespace std;
class Queue
{
int size=10;
int *Que =new int(size);
int counter,element;
int front,rear;
public:
Queue()
{
	front=-1;
	rear=-1;
	counter=0;
	/*cout<<"Enter the Size of Que"<<endl;
	cin>>size;*/
}
~Queue()
{
	delete Que;
	size=0;
}
void Enqueue(int);
void Dequeue();
void Display();
int Que_size();
void Que_front();
void Descrip();
};

//Function Definiton //
void Queue::Descrip()
{
	Sleep(12);
	system("color 2");
	char Desp[]="\n\nA queue data structure can be implemented using one dimensional array. But, queue implemented using array can store only fixed number of data values. The implementation of queue data structure using array is very simple, just define a one dimensional array of specific size and insert or delete the values into that array by using FIFO (First In First Out) principle with the help of variables 'front' and 'rear'. Initially both 'front' and 'rear' are set to -1. Whenever, we want to insert a new value into the queue, increment 'rear' value by one and then insert at that position. Whenever we want to delete a value from the queue, then increment 'front' value by one and then display the value at 'front' position as deleted element";
	int n=strlen(Desp);
	for(int i=0;i<n;i++)
	{
		Sleep(10);
		cout<<Desp[i];
	}

}
void  Queue::Que_front()
{
	cout<<"Front of Queue id:-"<<Que[front];
}
void Queue::Enqueue(int x)
{
	if(rear==size-1)
	{
		cout<<"Queue is Overflow"<<endl;
		return ;
	}
	else
	{
		if(front==-1)
		front=0;
		rear++;
		counter++;
		Que[rear]=x;
		cout<<Que[rear]<<"-:Insertion Successfully Done"<<endl;
		
		
		
	}
}
void Queue::Dequeue()
{
if(rear==-1 && front==-1)
{
cout<<"Queue is Underflow"<<endl;	
}	
else
{
cout<<"\nDequed Element:-"<<Que[front]<<endl;	
front++;
counter--;
}	
}
void Queue::Display()
{
	int i;
	if(rear==-1 && front==-1)
	{
		cout<<"Queue is underflow"<<endl;
	}
	else
	{	cout<<"\n\n";
		for(i=front;i<=rear;i++)
		{
			cout<<Que[i]<<"  ";
		}

	}
}
int Queue::Que_size()
{
	return counter;
}
int main()
{
SetConsoleTitle("Queue Data Structure By TechAbbott");
Queue Q;
int choice;
while(1)
{
cout<<"Main Menu"<<endl;
cout<<"1:Enqueu"<<endl;
cout<<"2:Dequeue"<<endl;
cout<<"3:Front"<<endl;
cout<<"4:Display"<<endl;
cout<<"5:Total size"<<endl;
cout<<"6:Description"<<endl;
cout<<"7:Exit"<<endl;
cout<<"Enter Your Choice"<<endl;
cin>>choice;
switch(choice)	
{
	case 1:
		int value;
		cout<<"Enter the Value"<<endl;
		cin>>value;
		Q.Enqueue(value);
		getch();
		break;
	case 2:
		Q.Dequeue();
		getch();
		break;
	case 3:
		Q.Que_front();
		getch();
		break;
	case 4:
		Q.Display();
		getch();
		break;
	case 5:
		cout<<"Totlal Size of Queue:-"<<Q.Que_size();
		break;
	case 6:
		Q.Descrip();
		getch();
		break;
	case 7:
		cout<<"Thanks For Using Our Codes"<<endl;
		getch();
		cout<<"\n\n";
		cout<<"\t  TechAbbott"<<endl;
		cout<<"\nPassion for Developing Best Porgrams"<<endl;
		getch();
		exit(0);
	default:
		cout<<"Invalid Choice"<<endl;
		//return;
}
system("cls");	
}}	

