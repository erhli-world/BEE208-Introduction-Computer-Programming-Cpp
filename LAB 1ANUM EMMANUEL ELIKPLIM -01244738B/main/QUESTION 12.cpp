// A CODE TO DETERMINE IF A NUMBER IS ODD AND ALSO DIVISIBLE BY 3

#include <iostream>
using namespace std;
int main(){
    int num;

    cout << " Enter your number: ";
    cin>> num;
    
    if (num % 3 ==0 && num/2 !=0) {
         cout << " The number is both odd and divisable by 3";
    
    }
    else{
        cout<< " Condition not satisfied";
    }
}
