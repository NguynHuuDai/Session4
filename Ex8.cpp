#include<stdio.h>
int main(){
	int a, b ,c;
	    printf("Nhap 3 canh ban muon kiem tra : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && c + a > b && b + c > a){
		printf("la 3 canh tam giac");
	}else{
		printf("khong phai 3 canh tam giac");
	}
	return 0;
}
