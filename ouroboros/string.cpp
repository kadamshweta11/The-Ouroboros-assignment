#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"entre first string";
	cin>>str1;
	cout<<"entre second string";
	cin>>str2;
	int result[str1.length()][str2.length()];
	for(int i=0;i<str1.length();i++)
	{
		for(int j=0;j<str2.length();j++)
		{
			if(str1.length()==str2.length())
			{
				result[i][j]=1;
				cout<<result[i][j]<<"\t";
			}
			else
			{
				result[i][j]=0;
				cout<<result[i][j]<<"\t";
			}
		}
		
	}
	return 0;
}
