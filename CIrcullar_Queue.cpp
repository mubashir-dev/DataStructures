#include<iostream>
#include<conio.h>
using namespace std;
class Circullar_Queue
{		int front,rear,count,Q;
	int Queue[10];
	//= new int(Q); 
	public:
		Circullar_Queue()
		{
			front=-1;
			rear=-1;
			count=0;
			Q=0;
		}
		void size_Input();
		void Enqueue(int);
		int  DeQueue();
		void disp();
};
void Circullar_Queue::size_Input()
{
	cout<<"Enter the Size of Queue"<<endl;
	cin>>Q;
}
void Circullar_Queue::Enqueue(int x)
{
if((rear+1)%Q==front)
{
	cout<<"Queue is Underflow"<<endl;
	return;
}
else
{
	if(rear==-1 && front==-1)
	{
		rear=front=0;
		Queue[rear]=x;
	}
	else
	{
		rear=(rear+1)%Q;
	}
	Queue[rear]=x;
}
}
int Circullar_Queue::DeQueue()
{
int value;
if(rear==-1 && front==-1)
{
cout<<"Queue is Underflw"<<endl;
//return;	
}	
else
{
value=Queue[front];
if(front==rear)
{
	front=rear=-1;
}
else
{
	front=(front+1)%Q;
}
		return value;

}
}
void Circullar_Queue::disp()
{
	int i;
	if(front==-1 && rear==-1)
	{
		cout<<"Queue is Underflow"<<endl;
	}
	else
	{
	if(front<=rear)
	{
	for(i=front;i<rear;i++)
	cout<<Queue[i]<<" ";	
	}	
	else
	{
	for(i=front;i<Q-1;i++)
	cout<<Queue[i]<<" ";
	for(i=0;i<=rear;i++)
	cout<<Queue[i]<<" ";	
	}
		
	}
}
int main()
{
	Circullar_Queue Q;
	Q.size_Input();
	Q.Enqueue(45);
	Q.Enqueue(12);
	Q.Enqueue(58);
	Q.Enqueue(21);
	Q.Enqueue(8);
	Q.disp();
	cout<<"\nDeleted Elemented Is:"<<Q.DeQueue();
	cout<<endl;
	
	cout<<"\nDeleted Elemented Is:"<<Q.DeQueue();
	cout<<endl;
	
	cout<<"\nDeleted Elemented Is:"<<Q.DeQueue();
	cout<<endl;
	
	cout<<"\nDeleted Elemented Is:"<<Q.DeQueue();
	cout<<endl;
	
	cout<<"\nDeleted Elemented Is:"<<Q.DeQueue();
	cout<<endl;
	Q.disp();
	return 0;
}
