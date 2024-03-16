
 //store reverse order string then print 
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     string str;
     getline(cin,str);
     string store;
     
     int size=str.length()-1;
     while(size>=0)
     {
         
         store.push_back(str[size]);
         size --;
     }
     cout<<"Orignal String : " <<str<<endl;
     cout<<"Reveser String : "<<store<<endl;
 }
