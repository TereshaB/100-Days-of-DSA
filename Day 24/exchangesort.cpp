#include<iostream>
using namespace std;
int main()
{   int array[]={3,4,1,-1,0};
    int length ;
    length=5;
    int temp;
    for(int i=0;i<(length-1);i++)
    {
        for(int j=(i+1);j<(length-1);j++) // validate if length-1 here is right with sir as in his slide it is length only 
        { 
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i =0;i<length;i++)
    {
        cout<<array[i]<<endl;
    }
}
