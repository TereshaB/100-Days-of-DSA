#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector <char> test={'a','b','c','x','y','z'};
    cout<<"Before pushback size: "<<endl;
    cout<<test.size(); // gives the size of the vector (vectorname.size())
    test.push_back('t');  // pushes an element to the back of the vector 
    cout<< "After pushback size: "<<endl;
    cout<<test.size()<<endl;
    cout<<test[6]<<endl;
    test.pop_back( );     // removes the last element of the vecotor 
    cout<<test.size()<<endl;
    cout<< test.front()<<endl; // prints the value of vector at front 
    cout<<test.back()<<endl;   // prints the value of vector at back
    cout<< test.at(2)<<endl;  // returns the value of vector stored at index 2
}