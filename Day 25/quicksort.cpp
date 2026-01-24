// work in progress 
// insertion or selection sort
#include<iostream>
#include<math.h>
using namespace std;
int A[10];
int Partition(int l ,int h)
{  
    int pivot=A[l];
    int i=l;
    int  j=h;
    while(i<j)
    {
        do 
        {
            i++;
        }
        while( A[i]<=pivot);
        do 
        {
            j++;
        }
        while(A[j]>=pivot);
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }
    swap(A[l],A[j]);
    return j; // partition position 
}
void Quick_sort(int l , int h )
{
    if(l<h)
    {
        int j = Partition(l,h);
        Quick_sort(l,j-1);
        Quick_sort(j+1,h);
    }
}
int main()
{
    int A[]={10,16,8,12,15,6,3,9,5};
    int low = A[0];
    int high= A[9];
    Partition(low,high);
    for(int i =0;i<10;i++)
    {
        cout<<A[i]<<endl;
    }
    
}
