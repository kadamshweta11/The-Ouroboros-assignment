#include<iostream>
using namespace std;
#define size 100
int top=-1;
int stack[size];
void push(int);
void pop();
void max();

int main()
{
	int n,x;
	cout<<"enter the number of testcases=";
	cin>>n;
	int ch;
	int i=1;
	while(i<=n)
	{
		cout<<"MAIN MENU\n1.push\n2.pop\n3.display max";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter the value to be inserted=";
				cin>>x;
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				max();
				break;
			//default:"INVALID CHOICE";
		}i++;
	}
}
	void push(int x)
	{
		if(top==size-1)
		{
			return;
		}
		else
		{
			top++;
			stack[top]=x;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			return;
		}
		else
		{
			//x=stack[top];
			top--;
		}
	}
	void max()
	{
		int max=0;
		if(top==-1)
		{
			return;
		}
		else
		{
			for(int j=0;j<=top;j++)
			{
				if(stack[j]>max)
				{
					max=stack[j];
				}
			}
			cout<<max<<endl;	
		}
	}
