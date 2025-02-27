#include <iostream>
using namespace std;

void findProfitOrLoss(double cp, double sp) {
    if (sp > cp) cout << "Profit: " << sp - cp << endl;
    else if (cp > sp) cout << "Loss: " << cp - sp << endl;
    else cout << "No Profit No Loss" << endl;
}

int main() {
    double cp, sp;
    cout << "Enter Cost Price and Selling Price: ";
    cin >> cp >> sp;
    findProfitOrLoss(cp, sp);
    return 0;
}
