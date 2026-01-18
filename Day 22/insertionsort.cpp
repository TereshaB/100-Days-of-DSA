#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
       int  curr=arr[i];
       int  prev=i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr; // placing into correct position
    }
}

int main()
{   
    int n=10;
    int arr[]={10,9,8,3,2,-1,-2,3,-3,-4};
    insertion_sort(arr,n);
    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
}


