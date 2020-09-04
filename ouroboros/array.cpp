#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"enter elements in array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"elements in reverse oredr are=";
	for(int j=n-1;j>=0;j--)
	{
		cout<<arr[j]<<"\t";
	}
	return 0;
}
