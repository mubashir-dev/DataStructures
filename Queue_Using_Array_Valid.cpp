#include<iostream>
#include<stdio.h>
#define max 10
using namespace std;
class Queue
{
int Que[max];
int front,rear,counter;
public:
Queue()
{
	
front=rear=-1;
counter=0;
}	
void Enqueue(int);
void Dequeue();
void disp();
void Peek();
void t_size();	
};
void Queue::Enqueue(int x)
{
if(rear==-1 &&front==-1)
{
counter++;
front=rear=0;
Que[rear]=x;			
}
else if((rear+1)%max==front)
{
	cout<<"\nSorry Not Able To Store More Data in Queue"<<endl;
	cout<<"Queue is Full"<<endl;
}
else
{
counter++;
rear++;
Que[rear]=x;
rear=(rear+1)%max;	
}	
}
void Queue::Dequeue()
{
if(rear==-1 && front==-1)
{
	cout<<"\n Nothing To Display In Queue"<<endl;
}
else
{	
if(rear==front)
{
	front=rear=-1;
}
else
{
counter--;
Que[front]=0;		
front=(front+1)%max;
}
}
}
void Queue::disp()
{
int i;
cout<<"Front ->";
for(i=front;i<counter;i++)
{
	cout<<Que[i]<<" -> ";
	
	}	
	cout<<"Rear";
	
	
}
void Queue::Peek()
{
	cout<<Que[front]<<endl;
}
void Queue::t_size()
{
	cout<<"Size: "<<counter<<endl;
}
int main()
{
	Queue Q;
	Q.Enqueue(10);
	Q.Enqueue(15);
	Q.Enqueue(11);
	Q.Enqueue(55);
	//cout<<endl;
//	Q.Peek();
//	cout<<endl;
//	Q.t_size();
//	cout<<endl;
//	Q.Dequeue();
//	Q.Dequeue();
//	Q.Dequeue();
//	Q.Dequeue();
//	Q.Dequeue();
	Q.disp();
	return 0;
}
