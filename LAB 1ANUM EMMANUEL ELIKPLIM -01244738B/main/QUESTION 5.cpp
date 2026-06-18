// A PROGRAM THAT READS IN TWO INTEGER VALUES FROM THE USER AND CHECKS WHETHER THE FIRST VALUE IS GREATER THAN THE SECOND VALUE OR NOT
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The first value is greater than the second value." << endl;
    } else {
        cout << "The first value is not greater than the second value." << endl;
    }

    return 0;
}