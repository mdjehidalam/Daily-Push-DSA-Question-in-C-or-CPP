#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,47,8,8,8,9,6};
    int n=sizeof(arr)/sizeof(arr[1]);
    //lenear seach find first occurence 
    int target;
    cin>>target;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            cout<<"First occurence : "<<i<<endl;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==target)
        {
            cout<<"last occurence: "<<i<<endl;
            break;
        }
    }
}
