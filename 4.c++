#include <iostream>
#include <cmath>
using namespace std;

void circleProperties(double radius) {
    cout << "Area: " << 3.14 * radius * radius << endl;
    cout << "Circumference: " << 2 * 3.14 * radius << endl;
}

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    circleProperties(radius);
    return 0;
}
