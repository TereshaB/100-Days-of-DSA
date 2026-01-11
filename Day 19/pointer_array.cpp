#include<iostream>
using namespace std;
int main()
{
    // int arr[]={15,10,15,20,25};
   
    // cout<<*arr<<endl; //arr[0]
    // cout<<*(arr+1)<<endl;// access arr[1]
    // cout<<*(arr+2)<<endl;// access arr[2]
    // cout<<*(arr+3)<<endl;// access arr[3]
    // cout<<*(arr+4)<<endl;// access arr[4]
    // pointer arithmetic 
    int*a;
    int*b=(a+2);
    cout<<b-a<<endl;

return 0;
} 