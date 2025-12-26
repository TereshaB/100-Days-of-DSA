#include<iostream>
using namespace std;

void changeArr(int arr[],int size)
{
   int  start=0;
   int end = size-1;
   while (start<end)
   {
        swap(arr[start],arr[end]);    //use of swap function to change the code 
        start++;
        end--;

   }



}
int main()
{
    int n; 
    cout<<"What size do you want the array to be "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the values for the array "<<endl;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    changeArr(arr,n);
    
     for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" "; 
    }
}