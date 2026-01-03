#include<iostream>
#include<vector>
using namespace std;


class Stack
{
    vector<int> v;
public:
void push(int val)
{
    v.push_back(val);
}
void pop()
{
    v.pop_back();
}
int top()
{
    return v[v.size()-1];
}

bool empty()
{
    return v.size()==0;
}

};

int main()

{
    Stack s;
    s.push(23);
    s.push(45);
    s.push(56);
    s.push(97);
    while( !s.empty())  //while not empty
    {
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;
    return 0;
}