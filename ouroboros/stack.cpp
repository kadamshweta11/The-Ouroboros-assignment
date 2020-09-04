#include<iostream>
#define size 100
using namespace std;
int top=-1;
int stack[size];
void push(int);
void pop();
void display();
int main()
{
	int n;
	char ans;
	int ch;
	do
	{
	cout<<"main menu \n1.push element\n2.pop element\n3.display element";
	cout<<"\nenter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter the element to push in stack=";
	        cin>>n;
	        push(n);
	        break;
	    case 2:
	    	pop();
	    	break;
	    case 3:display();
	    break;
	default:"INVALID CHOICE";
	
	}
	cout<<"\ndo you want to continue(y/Y)?";
	cin>>ans;
	}while(ans=='y'||ans=='Y');
	return 0;
}
void push(int n)
{
	if(top>=size-1)
	{
		cout<<"CANNOT INSERT.STACK OVERFLOW";
	}
	else
	{
		top++;
		stack[top]=n;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"CONNOT POP.STACK UNDERFLOW";
	}
	else
	{
		cout<<"popped element is="<<stack[top]<<endl;
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"STACK IS EMPTY";
	}
	else
	{
		cout<<"elements in stack are=";
		for(int i=top;i>-1;i--)
		{
			cout<<"\t"<<stack[i];
		}
	}
}
