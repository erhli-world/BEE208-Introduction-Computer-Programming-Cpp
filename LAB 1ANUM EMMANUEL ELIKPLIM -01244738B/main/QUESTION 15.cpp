// A PROGRAM THAT USES CONDITIONAL OPERATOR TO DETERMINE THE LARGEST OF TWO FLOATING NUMBERS
#include <iostream>
using namespace std;

int main(){
    float first_number,second_number;
    cout << " Enter first number: ";
    cin>> first_number;

    cout<< " Enter second number: ";
    cin>> second_number;

    float larger = (first_number>second_number)?first_number:second_number;

    cout << " The larger number is: "<<larger<<endl;

    return 0;
}