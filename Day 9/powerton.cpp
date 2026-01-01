// power to n 
#include<iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0)
        return 1.0;
    return x * power(x, n - 1);
}
int main() {
    double x;
    int n;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter exponent: ";
    cin >> n;

    double result = power(x, n);
    cout << x << "^" << n << " = " << result << endl;

    return 0;
}