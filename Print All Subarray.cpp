#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int nums[n];
	for(int i=0; i<n; i++)
	{
		cin>>nums[i];
	}
	
	for(int i=0; i<n; i++)
	{ 
		for(int j=0; j<n-i; j++)
		{
			for(int k=i; k<=i+j;k++)
			{
				cout<<nums[k]<<" ";
			}
			cout<<endl;
		}
	}
}
