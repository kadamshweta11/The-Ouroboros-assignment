#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s1,s2,s3;
	stack<int>sn1,sn2,sn3;
	int n1,n2,n3;
	int v=0;
	int sum1=0,sum2=0,sum3=0;
	cout<<"enter nunber of elements in stack 1,2,and 3=";
	cin>>n1>>n2>>n3;
	for(int i=0;i<n1;i++)
	{
		cin>>v;
		s1.push(v);
		sum1=sum1+v;
	}
	while(!s1.empty())
	{
		sn1.push(s1.top());
		s1.pop();
	}
	v=0;
	for(int i=0;i<n2;i++)
	{
		cin>>v;
		s2.push(v);
		sum2=sum2+v;
	}
	while(!s2.empty())
	{
		sn2.push(s2.top());
		s2.pop();
	}
	v=0;
	for(int i=0;i<n3;i++)
	{
		cin>>v;
		s3.push(v);
		sum3=sum3+v;
	}
	while(!s3.empty())
	{
		sn3.push(s3.top());
		s3.pop();
	}
	while(sum1!=sum2 ||sum2!=sum3)
	{
		if(sum1>sum2 && sum1>=sum3)
		{
			sum1=sum1-sn1.top();
			sn1.pop();
		}
		else if(sum2>=sum1 && sum2>=sum3)
		{
			sum2=sum2-sn2.top();
			sn2.pop();
		}
		else
		{
			sum3=sum3-sn3.top();
			sn3.pop();
		}
	}
	cout<<sum1;
	return 0;
}

