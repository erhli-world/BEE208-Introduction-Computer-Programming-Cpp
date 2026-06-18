// A CODE TO SWAP THE VALUES OF TWO VARIABLES

#include <iostream>
using namespace std;

int main(){
    int first_number,second_number;

    cout << " Enter first number: ";
    cin>> first_number;

    cout << " Enter second number: ";
    cin>> second_number;

    first_number=first_number^second_number;
    second_number=first_number^second_number;
    first_number=first_number^second_number;

    cout<< " NUMBERS SWAPPED: "<<endl;
    cout <<" first_number = "<<first_number<< endl;
    cout <<"second_number = "<<second_number<<endl;

    return 0;


}
