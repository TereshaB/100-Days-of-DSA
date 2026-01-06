// O(n^2) //brute force 
#include<iostream>
using namespace std;
int max_sum = INT_MIN;
int main()
{
    int arr[]={1,2,3,4,5};
    int n= 5;
    for(int st=0;st<n;st++)
    {
        int current_sum=0;
        for (int end=st;end<n;end++)
        {
            current_sum+=arr[end];
            max_sum=max(current_sum,max_sum);
        }
        
    }
    cout<<"maximum subarray sum: "<<max_sum;
    return 0;
}

