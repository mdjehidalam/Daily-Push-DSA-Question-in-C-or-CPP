 //check year whether leap year or not
 #include<iostream>
 using namespace std;
 int main()
 {
     int year ;
     cin>>year ;
    if(year%4==0 || year %100==0||  year %400==0)//checking year whether leap year or not
    {
        cout<<year <<" is leap year"<<endl;
    }else {
        cout<<year<<" is not leap year"<<endl;
    }
 }
