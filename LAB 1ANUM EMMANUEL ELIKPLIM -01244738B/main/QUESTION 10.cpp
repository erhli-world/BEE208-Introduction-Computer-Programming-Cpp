// A CODE THAT DETERMINES THE LARGER OF TWO NUMBERS

#include <iostream>
using namespace std;
int main(){
    double num1,num2;
    
    cout <<"Enter the first number: ";
    cin >> num1;    
    cout <<"Enter the second number: ";
    cin >> num2;    

    int larger = (num1 > num2) ? num1 : num2;
    cout << "The larger number is: " << larger << endl;
    return 0;
}