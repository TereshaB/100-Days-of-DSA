// Use of XOR operator to find out the unique value in a vector 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec ;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    int  answer=0;
    for(int i=0;i<vec.size();i++)
    {
        answer= answer^vec[i];
    }
    cout<<answer;


}