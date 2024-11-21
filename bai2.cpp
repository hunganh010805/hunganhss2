#include <stdio.h>

int main() {
    // Khai bao và khoi tao hai bien so nguyen
    int soNguyen1 = 15; // Bien so nguyen thu nhat
    int soNguyen2 = 25; // Bien so nguyen thu hai

    // Khai báo mot bien khác de luu tru ket qua tong
    int tong;

    // Tính tong cua hai so nguyên và luu vào bien `tong`
    tong = soNguyen1 + soNguyen2;

    // In ket qua ra man hinh
    printf("Tong cua %d va %d la: %d\n", soNguyen1, soNguyen2, tong);

    return 0;
}

