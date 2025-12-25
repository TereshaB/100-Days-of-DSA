
#include<iostream>
using namespace std;
int main()
{   //1.Find the smallest number in an array
    int arr[7]={1,23455,22,1,-15,-24,-123455};
    int size=7;
    int smallest= INT_MAX; // INT MAX =Largest possible value for any integer number 
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    cout<<"Smallest number in the array is "<<smallest<<endl;
    //2.Find the largest number in an array 
    int largest= INT_MIN;
    for(int i =0; i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"largest number in the array is"<<largest;

}

