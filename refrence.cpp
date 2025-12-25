//Pass by refrence is mostly used on non primitive data type (complex data type)
// array is pass by refrence
#include<iostream>
using namespace std;

void changerArr(int arr[],int size)
{
    cout<<"In function"<<endl;
    for(int i=0;i<size;i++)
    {
        arr[i]=2*arr[i];
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={4,56,7,8};
    changerArr(arr,4);
    cout<<"in main\n";
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" \n";
    }

}
