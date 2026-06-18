// A PROGRAM THAT CHECKS IF A NUMBER IS A POWER OF 2

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<" Enter a number: ";
    cin>>num;

    if(num>0 && (num & (num - 1))==0){
        cout<<num <<" is a power of 2"<<endl;

    }
    else {
    cout<<num<<" is NOT a power of 2"<<endl;
    }
    return 0;
}