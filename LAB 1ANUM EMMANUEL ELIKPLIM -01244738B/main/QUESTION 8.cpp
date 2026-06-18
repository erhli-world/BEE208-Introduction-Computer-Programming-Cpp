// A C++ PROGRAM THAT READS AN INTEGER VALUE AND CHECKS WHETHER IT IS ODD OR EVEN

#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if(num % 2 ==0)
{
    cout << "Even number." << endl;
}

    else
{
    cout << "Odd number." << endl;
}

    return 0;
}