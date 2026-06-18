// A CODE THAT READS IN A CHARACTER AND CHECKS IF IT IS AN UPPERCASE LETTER

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    } else {
        cout << "The character is not an uppercase letter." << endl;
    }

    return 0;
}