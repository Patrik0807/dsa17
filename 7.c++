#include <iostream>
using namespace std;

int largestOfThree(int a, int b, int c) {
    return max(a, max(b, c));
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Largest: " << largestOfThree(a, b, c) << endl;
    return 0;
}
