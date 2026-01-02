#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> test;
    test.push_back(3);
    test.push_back(5);
    test.push_back(7);
    test.push_back(8);
    int target=8;
    for (int i=0; i<test.size();i++)
    {
        if (test[i]==target)
        {
            cout<<"The target "<<target<<" is in index "<<i<<endl;
            
        }
        
    }  
        
}