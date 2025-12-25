#include<iostream>
using namespace std;
int main()
{
    cout<<"What size of array do you can to create?"<<endl;
    int n ;
    cin>>n;
    int arr[n];
    cout<<"Enter the values you want in the array";
    
    for(int i=0;i<n;i++)
    {   
        int val;
        cin>>val;
        arr[i]=val;
    }
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<"   ";
     }
     cout<<endl;
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout<<"After reversing "<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<"   ";
     }
}
