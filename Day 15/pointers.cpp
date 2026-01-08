#include<iostream>
using namespace std;
int main()
{
        int x= 5;
        cout<<"address of x is"<<&x<<endl;
        string b= "teresha";
        cout<<"address of b is "<<&b<<endl;
        string *c = &b ;
        cout<<&c<<endl;
        int adi = 5;
        int *p1 = &adi;
        int **p2 = &p1; // Double pointer ( pointer pointing to a pointer)
        cout<<p2<<endl;
        int *** p3 = &p2;
        cout<<"triple pointer address"<<&p3<<endl;
        int **** p4 =&p3;
        int *****p5= &p4;
        cout<<"fourth pointer address"<<&p4<<endl;
        cout<<"fifth pointer address"<<&p5<<endl;
        cout<<"first derefrence operator"<<*p1<<endl;  // Derefrence operator 
        cout<<"second derefrence operator"<<*p2<<endl;
        cout<<"third.derefrence operator"<<*p3<<endl;
        cout<<"fourth derefrence operator"<<*p4<<endl;
        cout<<"fifth derefrence operator"<<*p5<<endl;
return 0;
}