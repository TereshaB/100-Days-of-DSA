#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,1,0,-1,-2,-3,-4,-5};
    int n=9;
    // selection sort 
    for(int i=0;i<n-1;i++)
    {   
        int smallest_i=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest_i])
            {
                smallest_i=j;
            }
            swap(arr[i],arr[smallest_i]);
        }
       
    }

    for (int i =0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    
}

