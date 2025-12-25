//Taking input and displaying input in an array using for loop
#include<iostream>
using namespace std;
int main()
{  int n;
   cout<<"How many values do you want to store?"<<endl;
   cin>>n;
   int arr[n];
   // initializing taking input in array
   cout<<"Enter the values you want to enter in the array: ";
   for(int i=0;i<n;i++)  //taking input 
   {
    int a;
    cin>>a;
    arr[i]=a;
   }
    cout<<"The values are :"<<endl;
   for (int i =0;i<n;i++)  //printing the values 
   {
    cout<<arr[i]<<endl;
   }
}