#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Nhap mot so nguyen : ";
    cin >> number;

    if (number > 0) {
        cout << "So ban nhap la so duong." << endl;
    } else if (number < 0) {
        cout << "So ban nhap la so am." << endl;
    } else {
        cout << "So ban nhap la so 0." << endl;
    }

    return 0;
}

