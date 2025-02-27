#include <iostream>
using namespace std;

void studentResult(int marks) {
    if (marks >= 60) cout << "First Division" << endl;
    else if (marks >= 50) cout << "Second Division" << endl;
    else if (marks >= 40) cout << "Third Division" << endl;
    else cout << "Fail" << endl;
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    studentResult(marks);
    return 0;
}
