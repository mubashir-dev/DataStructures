#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int> mystack;
mystack.push(45);
mystack.push(71);	
mystack.push(61);
mystack.push(51);
mystack.push(41);
mystack.push(31);
mystack.push(1);
mystack.push(101);
cout<<"Size of Stack:-"<<sizeof(mystack)<<endl;
cout<<"Total Element in stack:->"<<mystack.size()<<endl;
int ele=mystack.top();
cout<<"Element in stack:"<<ele<<endl;
while(!mystack.empty())	
{
	cout<<"Top of Stack:"<<mystack.top()<<endl;	
	mystack.pop();
}
return 0;
}
