#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    //where n is no of row and m is no of column
    int arr[n][m];
    // input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    //Print
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // task for suming pricipal and secondary diagonal
    int pricipalSum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m ; j++)
        {
             if(i==j)
             {
                 pricipalSum = pricipalSum + arr[i][j];
             }
        }
    }
    cout<<"Sum of pricipal diagonal Matrix:" <<pricipalSum<<endl;
    int secondarySum=0;
     for(int i=n-1; i>=0; i--)
    {
        for(int j=m-1; j>=0; j--)
        {
             if(i==j)
             {
                 secondarySum =secondarySum + arr[i][j];
             }
        }
    }
    cout<<"sum of secondary diagonal Matrix: "<<secondarySum<<endl;
}
