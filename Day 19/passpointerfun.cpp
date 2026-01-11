// pass by refrence 
#include<iostream>
using namespace std;
int change_pointer(int* ptr )
{
   *ptr=20;
   return *ptr;
}
int change_by_alias(int &c)
{
    c=34;
    return 2;
}
int main()
{
    int a = 10;
    change_pointer(&a);
    cout<<a<<endl; // pass by refrence 
    change_by_alias(a);
    cout<<a<<endl; // changed by alias 

return 0;
}
