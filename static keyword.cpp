//static variable memory allocation crossponding of  class not an object 

#include<iostream>
using namespace std;
class base {

    
        public: 
    static int countObj;
    base()
    {
        countObj++;
    }
    void display()
    {
        cout<<countObj<<endl;
    }
};
int base::countObj=0;
int main()
{
    base b,c,d,e,f;
    cout<<base::countObj<<endl;
     
}
