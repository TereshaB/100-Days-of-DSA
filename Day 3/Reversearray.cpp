#include<iostream>
using namespace std;
int main()
{
    cout<<"What size of array do you can to create?"<<endl;
    int n ;
    cin>>n;
    int arr[n];
    cout<<"Enter the values you want in the array";
    
    for(int i=0;i<n;i++) //taking input value of array
    {   
        int val;
        cin>>val;
        arr[i]=val;
    }
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<"   "; //printing the array before reversing 
     }
     cout<<endl;
    for(int i=0;i<n/2;i++)    //main code to reverse the array 
    {
        int temp;
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout<<"After reversing "<<endl;  //Final result 
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<"   ";
     }
}
