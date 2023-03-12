#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers to specify the range: ";
    cin >> a >> b;
    cout << "The numbers in the range [" << a << ", " << b << "] are:\n";
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " (even)" << endl; // вивести парні числа
        }
        else {
            cout << i << " (odd)" << endl; // вивести непарні числа
        }
        if (i % 7 == 0) {
            cout << i << " (divisible by 7)" << endl; // вивести числа, кратні семи
        }
    }
    return 0;
}