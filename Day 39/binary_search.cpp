#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int num_arr = 5;
    int target=3;
    int left = 0;
    int right =num_arr-1;
    int answer =-1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(arr[mid]==target)
        {
            answer=mid;
            break;
        }
        else if (arr[mid]<target)
        {
            left=mid+1;
        }
        else // mid>target 
        {
            right=mid-1;
        }
    }
    cout<<"The array was found in "<<answer;
    cout<<endl;
}
