#include<iostream>
using namespace std;
int main()
{
	int n=6;
	int arr[n]={3,8,9,10,0,2};
	int key;
	cout<<"Enter the number to find";
	cin>>key;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"Element found at position:"<<i+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	
		cout<<"Element not found";
	
	return 0;
}
