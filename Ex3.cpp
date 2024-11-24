#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Nhap mot so nguyen: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "So ban nhap chia het cho ca 3 va 5." << endl;
    } else if (number % 3 == 0) {
        cout << "so ban nhap chia het cho 3." << endl;
    } else if (number % 5 == 0) {
        cout << "So ban nhap chia het cho 5 ." << endl;
    } else {
        cout << "So ban nhap khong chia het cho 3 hay 5." << endl;
    }

    return 0;
}


