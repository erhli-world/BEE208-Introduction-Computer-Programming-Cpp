// A CODE THAT TAKES THREE INTEGER VALUES AS INPUT AND CHECKS IF THEY ARE EQUAL OR NOT

#include <iostream>
using namespace std;    
int main() {
    int num1, num2, num3;

    cout << " Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3) {
        cout << " EQUAL. " << endl;
    } else {
        cout << " NOT EQUAL. " << endl;
    }

    return 0;
}