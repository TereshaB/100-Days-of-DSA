#include<iostream>
#include<vector>
using namespace std;

// Function declaration (or move definition before main)
int rev(vector<int>& test, int size);

int main()
{
    vector<int> test;
    test.push_back(3);
    test.push_back(5);
    test.push_back(7);
    test.push_back(8);
    int size = test.size();
    rev(test, size);  // Pass the vector to reverse
    return 0;
}

int rev(vector<int> &test, int size)  // Pass by reference with &
{
    for(int i = 0; i < (size/2); i++)
    {   
        int temp;
        temp = test[i];                    // Store first element
        test[i] = test[size-1-i];          // Copy last to first
        test[size-1-i] = temp;             // Copy temp to last
    }
    cout << "Reversed" << endl;
    cout << test[0] << endl;
    cout << test[1] << endl;
    cout << test[2] << endl;
    cout << test[3] << endl;
    return 0;
}




