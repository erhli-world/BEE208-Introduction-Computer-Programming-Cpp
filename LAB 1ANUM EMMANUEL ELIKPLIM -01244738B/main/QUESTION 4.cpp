// A PROGRAM THAT READS IN A STRING FROM THE USER AND CHECK WHETHER ITS EQUAL TO "HELLO" OR NOT

#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (input == "HELLO") {
        cout << "The string is equal to HELLO." << endl;
    } else {
        cout << "The string is NOT equal to HELLO." << endl;
    }

    return 0;
}