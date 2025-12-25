// Linear Search
#include<iostream>
using namespace std;
int main()
{   int size=7;
    int index=-1;
    int arr[7]={4,2,7,8,1,2,5};  //size = 7 target =8
    for(int i=0;i<size;i++)
    {
        if(arr[i]==5)
        {
            index= i;
        }
    }

    cout<<"Target is at index : "<<index<<endl;
    cout<<"-1 occurs if target doesn't exist"<<endl;
    
}
