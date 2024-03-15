 #include<iostream>
 #include<string.h>
 using namespace std;
 class personal {
     public:
    char name[70];
    char address[80];
    int mobile;
    
    personal(char name[],char address[], int mobile )
    {
        strcpy(this ->name,name);
        strcpy(this->address,address);
        this ->mobile=mobile;
    }
 };
 class EmpIfno{
    char empid[70];
    int salary;
    personal *p;
    public: 
    EmpIfno(personal &p, char empid[],int salary)
    {
      this->p=&p;
      strcpy(this->empid,empid);
      this->salary=salary;  
    }
    void display()
    {
        cout<<"EMPLOYEE INFORMATION"<<endl;
        cout<<"Name: "<<p->name<<endl;
        cout<<"Mobile No:"<<p->mobile<<endl;
        cout<<"Employee ID : "<<empid<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Address: "<<p->address<<endl;
    }
 };

 int main()
 {
    personal p1("Md Jehid Alam","Katihar,Bihar",81027865);
    EmpIfno E1(p1,"Md8959845",76000);
    system("cls");
    E1.display();
 }
