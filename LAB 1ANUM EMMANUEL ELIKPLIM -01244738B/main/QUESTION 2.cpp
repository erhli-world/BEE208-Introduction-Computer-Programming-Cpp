//A CODE TO CALCULATE THE AREA OF A CIRCLE GIVEN THE RADIUS 

#include <iostream>
#include <cmath>
using namespace std;        
int main() {
    double radius, area;
    const double PI = 3.14159;

    cout << " Enter the radius of the circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);

    cout << " The area of the circle is: " << area << endl;

    return 0;
}