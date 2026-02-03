#include<iostream>
using namespace std;
int sum_n(int n)
{
    if(n==1) // base case
    {
        return 1;
    }
    else // recursion 
    {   
        return n+sum_n(n-1);

    }
}
int main()
{
    cout<<sum_n(100); 
}