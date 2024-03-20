#include<iostream>
using namespace std;
class ABC
{
    int a,b;
    public: 
    ABC(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    friend void sum(ABC a);//friend function declaration 
};
//friend function defination 
void sum(ABC s)
{
    
    cout<<"sum: "<<s.a*s.b<<endl;
}


int main()
{
    ABC A(23,45);
    system("cls");
    sum(A);//calling friend function, it is like a normal function 
   
    return 0;
}
/*
a friend fucntion posseses certain special charactericstics: 
it is not in the scope of the class to which it has been declared as friend.
since it is not in the scope of the class it cannot be called using the object of that class.
it can be invoked like a normal function without the help of any object


unlike member function . it cannnot acceess the member names diredlty and has to use an object names and  not membership operator with each member name (eg. ABC.function)

it can be declared either in the puclic or private part of class without affecting its meaning 
usually it has the objects as arguement.
*/
