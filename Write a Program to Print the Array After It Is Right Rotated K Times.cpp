// Right rotate array

/*
Write a Program to Print the Array After It Is Right Rotated K Times.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before right rotating array: "<<endl;
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     
     
    int i=0,k;
    cin>>k;
    
    //rotating array
     while(i<=k && k<n)
     {
         swap(arr[i],arr[k]);
         i++;
         k++;
     }
     
     cout<<"After rotating array: "<<endl;
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }
}
