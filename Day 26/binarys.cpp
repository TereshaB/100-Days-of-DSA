#include<iostream>
using namespace std;
int bsearch(int arr[],int item)
{
    int low=0, mid,high=8;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid]==item)
            {
                return mid;
            }
            else if (arr[mid]<item)
            {
                low=mid+1;
            }
            else 
            {
                low=mid-1;
            }
        }
    return -1;

}
int main()
{
    int item = 6;
    int arr[]={2,3,4,5,6,7,8,9,10}; 
    int result= bsearch(arr,10);
    cout<<"Index:"<<result<<endl;
}