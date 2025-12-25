#include<iostream>
using namespace std;
int main()
{
   int arr[5];
   // initializing taking input in array
   for(int i=0;i<5;i++)
   {
    cout<<"Enter the value you want to enter in the array";
    int a;
    cin>>a;
    arr[i]=a;
   }
   for (int i =0;i<5;i++)
   {
    cout<<"The values are :"<<arr[i]<<endl;
   }
}