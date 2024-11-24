#include <iostream>
using namespace std;

int main() {
	float thangtruoc, thangsau, tong, bill;
	
	cout <<"Nhap so ma dien cua thang truoc : " ;
	cin >> thangtruoc;
	
	cout <<"Nhap so dien cua thang nay : " ;
	cin >> thangsau;
	
	tong = thangsau - thangtruoc;
	
	if ( 0 <= tong && tong < 50 ) {
	     bill = tong * 10000;
	}
    else if ( 50 <= tong && tong < 100 ) {
	    bill = tong * 15000;
	}
    else if ( 100 <= tong && tong < 150 ) {
	    bill = tong * 20000;
	}
    else if ( 150 <= tong && tong < 200 ) {
	     bill = tong * 25000;
	}
    else (  200 <= tong  ) ;{
	      bill = tong * 30000;
	}
	
	cout << " So dien tieu thu trong thang nay la : " << tong <<" kWh." << endl;
	cout << " So tien dien trong thang nay la : " << static_cast<int>(bill) <<" ." << endl;
	
	return 0;
}
