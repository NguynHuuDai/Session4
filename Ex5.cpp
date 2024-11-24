#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	
	cout <<"Nhap so nguyen thu nhat : " ;
	cin >> num1;
	
	cout <<"Nhap so nguyen thu hai : " ;
	cin >> num2;
	
	cout <<"Nhap so nguyen thu ba : " ;
	cin >>num3;
	
	if((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
		cout <<"So thu ba nam trong khoang giua so thu nhat va thu hai. " << endl;
    } else {
	    cout <<"So thu ba khong nam trong khoang giua so thu nhat va so thu hai. "<< endl;
	}		
	
	return 0;		
}
