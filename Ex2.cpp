#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Vui long nhap mot so nguyen: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "So ban nhap la so chan." << endl;
    } else {
        cout << "So ban nhap la so le." << endl;
    }

    return 0;
}

