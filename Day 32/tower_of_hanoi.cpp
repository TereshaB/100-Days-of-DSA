#include<iostream>
using namespace std;
void toh(int n , string source  , string helper , string destination)
{
    if(n==1)
    {
        cout<<" Transfer disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    toh(n-1,source , destination , helper);
    cout<<" Transfer disk "<<n<<" from "<<source<<"to "<<destination<<endl;
    toh(n-1, helper, source, destination); 
}
int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    toh(n,"Source","Helper","Destination");
} 