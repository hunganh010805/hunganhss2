#include <stdio.h>

int main() {
   
    int chieuDai = 10;
    int chieuRong = 5; 

    // Khai b�o bien de luu ket qua chu vi v� dien tich
    int chuVi;
    int dienTich;

    // T�nh to�n chu vi v� dien tich
    chuVi = 2 * (chieuDai + chieuRong);          
    dienTich = chieuDai * chieuRong;             

    // In ket qua ra man hinh
    printf("Chieu dai: %d\n", chieuDai);
    printf("Chieu rong: %d\n", chieuRong);
    printf("Chu vi hinh chu nhat: %d\n", chuVi);
    printf("Dien tich hinh chu nhat: %d\n", dienTich);

    return 0;
}

