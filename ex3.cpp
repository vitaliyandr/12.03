#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0;
    cout << "Enter two numbers to specify the range: ";
    cin >> a >> b;
    cout << "The numbers in the range [" << a << ", " << b << "] are:\n";
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        sum += i; // додати поточне число до суми
    }
    cout << "The sum of the numbers in the range [" << a << ", " << b << "] is: " << sum << endl;
    return 0;
}