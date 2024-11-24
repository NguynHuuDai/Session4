#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Nhap so thang (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Thang " << month << " co 31 ngay." << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Thang " << month << " có 30 ngay." << endl;
            break;
        case 2:
            cout << "Thang 2 có 28 hoac 29 ngay (nam nhuan)." << endl;
            break;
        default:
            cout << "Sa thang ban nhap khong hop le!" << endl;
            break;
    }

    return 0;
}


