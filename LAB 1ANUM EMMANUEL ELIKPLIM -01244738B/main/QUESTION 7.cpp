// A CODE THAT READS IN A STRING FROM THE USER AND CHECKS IF IT CONTAINS THE CHARACTER 'A' OR NOT

#include <iostream>
#include <string>

using namespace std;
int main(){
    string input;

    cout<<"Enter a string: ";
    getline(cin, input);

    if(input.find('A') != string::npos) {
        cout << "Contains 'A'." << endl;
    } else {
        cout << "Does not contain 'A'." << endl;
    }
}
