#include <iostream>
using namespace std;

void checkOddEven(int num) {
    cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkOddEven(num);
    return 0;
}
