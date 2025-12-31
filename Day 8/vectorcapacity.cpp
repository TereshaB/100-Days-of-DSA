#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(8);
    vec.push_back(1);
    sort(vec.begin(), vec.end());
    for(int i; i<5;i++)
    {
        cout<<vec[i]<<endl;
    }

    
    cout<<"Size :"<<vec.size()<<endl;
    cout<<"Capacity:"<<vec.capacity();
}

/*
In C++, std::vector maintains size and capacity, which are related but not the same:

size() → number of elements currently stored.

capacity() → amount of memory already allocated; the vector can grow up to this many elements without reallocating.

Key points:

Size ≤ Capacity always.

When pushing elements beyond current capacity, the vector reallocates (typically grows geometrically), 1 to 2 to 4 to 8 
*/

/*
How to sort vectors???
int main() { std::vector<int> v = {5, 2, 9, 1, 3}; std::sort(v.begin(), v.end()); // ascending }

std::sort(v.begin(), v.end(), std::greater<int>()); (descending);
*/