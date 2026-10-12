
#include <iostream>
using namespace std;

int main() {
    int num1, num2, smaller, larger;

    cout << "Please enter the first integer: ";
    cin >> num1;

    cout << "Please enter a second integer: ";
    cin >> num2;

    
    smaller = (num1 < num2) ? num1 : num2;
    larger = (num1 > num2) ? num1 : num2;

    cout << "The smaller number is " << smaller << endl;
    cout << "The larger number is " << larger << endl;

    return 0;
}
