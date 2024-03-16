//overriding a function 
#include<bits/stdc++.h>
using namespace std;
class base {
    public: 
    void display()
    {
        cout<<"Callling base class function "<<endl;
    }
};
class Drived : public base {
    public: 
    void display()
    {
        cout<<"calling Drived class function "<<endl;
        cout<<" hello hi "<<endl;
    }
};
int main()
{
    Drived d;
    d.display();
     
}
