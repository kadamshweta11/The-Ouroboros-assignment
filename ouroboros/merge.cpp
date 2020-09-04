#include<iostream>
using namespace std;



void merge(int arr[],int l,int m ,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int l[n1],r[n2];
	for(i=0;i<n1;i++)
	   l[i]=arr[l+i];
	for(j=0;j<n2;j++)
	    r[j]=arr[m+1+j];
	    
	i=0;
	j=0;
	k=1;
	while(i<n1  && j<n2)
	{
		if(l[i]<=r[j]){
			arr[k]=l[i];
			i++;
		}
		else{
			arr[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=l[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=r[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void printarray(int a[],int size)
{
	int i;
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
		cout<<endl;
	}
}
int main()
{
	int arr[]={12,34,67,13,3,5};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	cout<<"given array is=";
	printarray(arr,arr_size);
	mergesort(arr,0,arr_size-1);
	cout<<"sorted array is=";
	printarray(arr,arr_size);
	return 0;
}
