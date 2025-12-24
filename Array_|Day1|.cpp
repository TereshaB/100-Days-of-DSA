#include <iostream>
using namespace std;
int arr[5]={1,2,3,4,5}; //array declaration and initialization
string names[3]={"Teresha","John","Emma"};
double fl[3];
int main()
{
    fl[0]=2.3;
    fl[1]=6.05;
    fl[2]=2.4;
    cout<<arr[0]<<endl; //acessing array elements 
    cout<<names[2]<<endl;
    cout<<fl[2]<<endl;
    int a= sizeof(arr)/sizeof(arr[0]); // calculating length of an array
    cout<< "Length of the array is:"<<a<<endl;
    int b = sizeof(names)/sizeof(names[0]);
    cout<< "Length of second array is :"<<b<<endl;

}