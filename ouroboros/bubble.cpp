#include<iostream>
using namespace std;
void swap(int *xp,int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	bool swaped;
	for(i=0;i<n-1;i++)
	{
		swaped=false;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				swaped=true;
			}
		}
		if(swaped==false)
		
			break;
	}
}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[]={64,78,43,76,19,90,16};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<<"sorted array are:";
	print(arr,n);
	return 0;
}
