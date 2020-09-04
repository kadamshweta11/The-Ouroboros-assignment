#include <iostream>
using namespace std;

void quicksort(int [],int,int);
int partition(int [],int,int);

int main() {
    int n=5;
    int arr[n]={45,16,38,22,0};
    int l = 0,h = n;
    quicksort(arr,l,h);

    cout<<"Sorted array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}

void quicksort(int arr[],int l, int h)
{
    int p=0;
    if(l<h)
    {
        p = partition(arr,l,h);
        quicksort(arr,l,p);
        quicksort(arr,p+1,h);
    }

}

int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i=l,j=h;
    while(i<=j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }

        if(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }

    int temp1 = arr[l];
    arr[l] = arr[j];
    arr[j] = temp1;

    return j;
}
