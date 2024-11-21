#include <stdio.h>

int main() {
    // Khai bao hang so PI và ban kinh hinh tron
    const float PI = 3.14; // Hang so PI
    float banKinh = 5.0;   // Bán kính hình tròn 

    // Khai báo bien de luu ket qua chu vi và dien tich
    float chuVi;
    float dienTich;

    // Tinh toan chu vi và dien tich
    chuVi = 2 * PI * banKinh;          
    dienTich = PI * banKinh * banKinh; 

    // In ket qua ra man hinh
    printf("Ban kinh hinh tron: %.2f\n", banKinh);
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

