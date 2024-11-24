#include<stdio.h>

int main() {
    int ngay, thang, nam;
    
    printf("Vui long nhap ngay, thang, nam: ");
    scanf("%d %d %d", &ngay, &thang, &nam);
    
    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le.\n");
        return 0; //
    }
    
    int songay;
    
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        songay = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        songay = 30;
    } else {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            songay = 29; 
        } else {
            songay = 28;  
        }
    }
    
    if (ngay < 1 || ngay > songay) {
        printf("Ngay khong hop le trong thang %d cua nam %d.\n", thang, nam);
    } else {
        printf("Ngay, thang, nam hop le.\n");
    }
    
    return 0;
}

