// A PROGRAM THAT CONVERTS BINARY TO DECIMAL

#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
    int num;

    cout<<" Enter a binary number: ";
    cin>> num;

    cout<<  " The decimal equivalent of "<< num <<" is: ";    
    int decimal = 0, i = 0, rem;
    while (num != 0) {
        rem = num % 10;
        num /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }                                         
    cout << decimal << endl;
    return 0;

}