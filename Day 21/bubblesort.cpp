#include<iostream>
using namespace std;
int main()
{
        int arr[]={4,2,1,0,-1,-2,-3,-4,-5};
        int n=9;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<(n-1-i);j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for (int i =0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }


}
