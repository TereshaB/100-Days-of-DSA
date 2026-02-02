#include <iostream>
using namespace std;
class Stack
{
private:
    int size, top;
    int *STACK;

public:
    Stack(int m_size)
    {
        size = m_size;
        STACK = new int[size]; // heap memory allocation to an array named stack
        top = -1;
    }
    bool isfull()
    {
        if (top == (size - 1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int item)
    {
        if (isfull())
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            STACK[top] = item;
        }
    }
    int pop()
    {
        if (isempty())
        {
            cout << "Stack underflow" << endl;
            return ;
        }
        else
        {
            int item = STACK[top];
            top--;
            return item;
        }
    }
    void display()
    {
        for (int i = top; i > -1; i--)
        {
            cout << STACK[i] << endl;
        }
    }
};


int main()
{
    Stack s(3);
    s.push(3);
    s.push(5);
    s.push(1);
    s.display();
    return 0;
}