#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void bai1_tinhHocLuc(void) {
    double dtb;
    printf("\n===== BAI 1: TINH HOC LUC =====\n");
    printf("Nhap diem trung binh (0-10): ");
    if (scanf("%lf", &dtb) != 1) {
        printf("Dau vao khong hop le!\n");
        while (getchar() != '\n');
        return;
    }
    if (dtb < 0 || dtb > 10) {
        printf("Diem phai trong khoang 0-10!\n");
        return;
    }

    printf("Hoc luc: ");
    if (dtb >= 9.0)
        printf("Xuat sac\n");
    else if (dtb >= 8.0)
        printf("Gioi\n");
    else if (dtb >= 6.5)
        printf("Kha\n");
    else if (dtb >= 5.0)
        printf("Trung binh\n");
    else
        printf("Yeu\n");
}

void bai2_phuongTrinhBac1(void) {
    double a, b;
    printf("\n===== BAI 2: GIAI PHUONG TRINH BAC NHAT =====\n");
    printf("Phuong trinh dang ax + b = 0\n");
    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1) { while (getchar() != '\n'); printf("Dau vao khong hop le!\n"); return; }
    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1) { while (getchar() != '\n'); printf("Dau vao khong hop le!\n"); return; }

    if (a == 0.0) {
        if (b == 0.0)
            printf("Phuong trinh co vo so nghiem (VSN)\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        double x = -b / a;
        printf("Phuong trinh co 1 nghiem: x = %.6f\n", x);
    }
}

void bai3_phuongTrinhBac2(void) {
    double a, b, c;
    printf("\n===== BAI 3: GIAI PHUONG TRINH BAC 2 =====\n");
    printf("Phuong trinh dang ax^2 + bx + c = 0\n");
    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1) { while (getchar() != '\n'); printf("Dau vao khong hop le!\n"); return; }
    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1) { while (getchar() != '\n'); printf("Dau vao khong hop le!\n"); return; }
    printf("Nhap c: ");
    if (scanf("%lf", &c) != 1) { while (getchar() != '\n'); printf("Dau vao khong hop le!\n"); return; }

    if (a == 0.0) {
        // Trở thành phương trình bậc nhất bx + c = 0
        if (b == 0.0) {
            if (c == 0.0)
                printf("Phuong trinh co vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            double x = -c / b;
            printf("Phuong trinh co 1 nghiem: x = %.6f\n", x);
        }
    } else {
        double delta = b * b - 4.0 * a * c;
        if (delta < 0.0) {
            printf("Phuong trinh vo nghiem (delta < 0)\n");
        } else if (fabs(delta) < 1e-12) {
            double x = -b / (2.0 * a);
            printf("Phuong trinh co nghiem kep: x = %.6f\n", x);
        } else {
            double s = sqrt(delta);
            double x1 = (-b + s) / (2.0 * a);
            double x2 = (-b - s) / (2.0 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.6f\n", x1);
            printf("x2 = %.6f\n", x2);
        }
    }
}

void hienThiMenu(void) {
    printf("\n========================================\n");
    printf("        MENU CHUONG TRINH\n");
    printf("========================================\n");
    printf("1. Tinh Hoc Luc\n");
    printf("2. Giai Phuong Trinh Bac Nhat\n");
    printf("3. Giai Phuong Trinh Bac 2\n");
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
                bai1_tinhHocLuc();
                break;
            case 2:
                bai2_phuongTrinhBac1();
                break;
            case 3:
                bai3_phuongTrinhBac2();
                break;
            case 0:
                printf("Cam on da su dung chuong trinh. Tam biet!\n");
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
        }
    }
    return 0;
}