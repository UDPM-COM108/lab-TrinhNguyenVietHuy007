// Bài 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
#include <stdio.h>
#include <math.h>
void bai1_trungBinhTong(void) {
    int min, max, s = 0, count = 0;
    float tb;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    if (min > max) {
        printf("Loi: min phai nho hon hoac bang max!\n");
        return;
    }
    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            s += i;
            count++;
        }
    }
    if (count == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang [%d, %d]\n", min, max);
    } else {
        tb = (float)s / count;
        printf("Trung binh tong cac so chia het cho 2: %.2f\n", tb);
    }
}
// Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
void bai2_soNguyenTo(void) {
    int n, flag = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 2) {
        flag = 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }
}
// Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
void bai3_soChinhPhuong(void) {
    int n, sqrt_n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Loi: n phai >= 0!\n");
        return;
    }
    sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n) {
        printf("%d la so chinh phuong\n", n);
    } else {
        printf("%d khong phai la so chinh phuong\n", n);
    }
}
// Bài 4 : XÂY DỰNG CHƯƠNG TRÌNH CHO CÁC BÀI TRÊN
void hienThiMenu(void) {
    printf("        MENU CHUONG TRINH\n");
    printf("1. Tinh Trung Binh Tong So Chia Het Cho 2\n");
    printf("2. Xac Dinh So Nguyen To\n");
    printf("3. Xac Dinh So Chinh Phuong\n");
    printf("0. Thoat\n");
    printf("========================================\n");
    printf("Lua chon cua ban: ");
}

int main(void) {
    int luachon = -1;
    
    while (1) {
        hienThiMenu();
        if (scanf("%d", &luachon) != 1) {
            printf("Dau vao khong hop le! Vui long nhap so.\n");
            while (getchar() != '\n');
            continue;
        }
        
        switch (luachon) {
            case 1:
                bai1_trungBinhTong();
                break;
            case 2:
                bai2_soNguyenTo();
                break;
            case 3:
                bai3_soChinhPhuong();
                break;
            case 0:
                printf("Cam on da su dung chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
        }
    }
    
    return 0;
}