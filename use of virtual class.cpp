//use of virtual function 
#include<bits/stdc++.h>
using namespace std;
class base //virtual class 
{
    public : 
   virtual  void display()// virtual method 
    {
        cout<<"Base class display"<<endl;
    }
};
class Drived {
    public: 
    void display()
    {
        cout<<"display Drived class"<<endl;
    }
};
int main()
{
    Drived d;
    d.display();
}
