
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"neither prime nor composite"<<endl;
    }
    else
    {
        int flag = 0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                cout<<"composite"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"prime"<<endl;
        }
    }

}