#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter numbers, enter 0 to stop: ";
    cin >> num;
    while (num != 0) {
        sum += num; // додати поточне число до суми
        cin >> num; // зчитати наступне число
    }
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}