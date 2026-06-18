// A PROGRAM TO CONVERT BINARY TO DECIMAL, BINARY TO OCTALDECIMAL, BINARY TO HEXADECIMAL
#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    int binary, decimal = 0, octal = 0, hexadecimal = 0, i = 0, j = 1;
    cout << "Enter a binary number: ";
    cin >> binary;

    // Binary to Decimal Conversion
    int tempBinary = binary;
    while (tempBinary != 0) {
        int remainder = tempBinary % 10;
        decimal += remainder * pow(2, i);
        tempBinary /= 10;
        i++;
    }

    // Decimal to Octal Conversion
    int tempDecimal = decimal;
    i = 1;
    while (tempDecimal != 0) {
        octal += (tempDecimal % 8) * j;
        tempDecimal /= 8;
        j *= 10;
    }

    // Decimal to Hexadecimal Conversion
    tempDecimal = decimal;
    string hexDigits = "0123456789ABCDEF";
    string hexResult = "";
    while (tempDecimal != 0) {
        int remainder = tempDecimal % 16;
        hexResult = hexDigits[remainder] + hexResult;
        tempDecimal /= 16;
    }

    cout << "Decimal: " << decimal << endl;
    cout << "Octal: " << octal << endl;
    cout << "Hexadecimal: " << hexResult << endl;

    return 0;
}