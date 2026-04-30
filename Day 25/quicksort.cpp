#include<iostream>
#include<vector>
using namespace std;
int partition(vector <int> &arr , int st ,int end )
{
    int idx = st-1 , pivot=arr[end];
    for(int j=st;j<end;j++)// j only goes till end -1 as pivot doesn't need to be sorted 
    {
        if(arr[j]<=pivot)
        {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx; 
}

void quickSort(vector<int> &arr,int st, int end)
{
    if(st<end)//this is before quick sort divides to one element each at that point you don't need sorting 
    {
        int pivIdx= partition(arr,st,end);
        quickSort(arr,st,pivIdx-1); // for left half 
        quickSort(arr,pivIdx+1,end); // for right half 
    }
}
int main()
{
    vector<int>arr={12,31,35,8,32,7,16};
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    }


