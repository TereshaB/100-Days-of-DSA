// work in progress 
#include<iostream>
using namespace std;
int Pratition(int l ,int h);
{  
    pivot=Arr[l];
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
    swap (A[l],A[j]);
    return j; // partition position 
}
void Quick_sort(int l , int h )
{
    if(l<h)
    {
        Partition(l,h);
    }
    Quick_Sort(l,j);
    Quick_Sort(j+1,h);
}
int main()
{
    int A[]={10,16,8,12,15,6,3,9,5,INT_MAX};
    int low = A[0];
    int high= A[9];
    Partition(low,high);
    
}
