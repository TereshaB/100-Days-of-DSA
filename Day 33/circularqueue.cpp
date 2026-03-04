#include<iostream>
using namespace std;
class Queue
{    int arr[4];
    int currentsize=0 , capacity = 4 , r=-1 , f=0;
    public:
    bool isfull()
    {
        if(currentsize==capacity)
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
        if(currentsize==0)
        {
            return true ;
        }
         else 
        {
            return false; 
        }
    }
void Enqueue(int item)
    {
        if(isfull())
        {
            cout<<"Queue is full\n";
        }
        else 
        {
            r=(r+1)%capacity;
            arr[r]=item;
            currentsize++;
        }
    
    }
int dequeue()
{
    if(isempty())
    {
        cout<<"Queue is empty\n";
         throw runtime_error("Queue is empty");
    }
    else 
    {   int temp = arr[f];
        f=(f+1)%capacity;
        currentsize--;
        return temp;
    }
}
    void display()
    {
        if(isempty())
        {
            cout<<"Nothing to display\n";
        }
        else 
        {
            int i = f;
            while(i!=r)
            {
                cout<<arr[i]<<endl;
                i=(i+1)%capacity;
            }
            cout<<arr[i];
        }
    }
};
int main()
{
  Queue q;
  q.Enqueue(2);
  q.Enqueue(3);
  q.Enqueue(4);
  q.Enqueue(5);
  q.display();
  q.dequeue();
q.dequeue();
cout<<"\nAfter deqeue"<<endl;
  q.display();
}
