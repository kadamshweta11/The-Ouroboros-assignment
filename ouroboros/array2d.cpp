#include<iostream>
using namespace std;
int main()
{
	int arr[6][6];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sum;
	int result[4][4];
	int max=-999;
	for(int i=0;i<=3;i++)
	{
		sum=0;
		for(int j=0;j<=3;j++)
		{
			sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
			result[i][j]=sum;
			if(max<sum)
			{
				max=sum;
			}
			
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(max<result[i][j])
			max=result[i][j];
		}
	}
	cout<<max;
	return 0;
}
