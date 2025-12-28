#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> name(5,7);  //for each loop in vector 
    for (int i :name ) // the i acceses the element
    {
        cout<<i<<endl;
    }
}