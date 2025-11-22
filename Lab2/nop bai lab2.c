// BÀI TẬP LAB2 - NHIỀU BÀI NHỎ THU GỌN TRONG 1 CHƯƠNG TRÌNH
#include <stdio.h>
#define PI 3.14f

int main(void) {
    /* BÀI 1: CỘNG TRỪ 2 SỐ */
    int x, y, tong, hieu;
    printf("Bai 1 - Nhap 2 so nguyen\n");
    printf("nhap x: ");
    if (scanf("%d", &x) != 1) return 1;
    printf("nhap y: ");
    if (scanf("%d", &y) != 1) return 1;
    tong = x + y;
    hieu = x - y;
    printf("tong = %d\n", tong);
    printf("hieu = %d\n\n", hieu);

    /* BÀI 2: HCN - CHU VI VÀ DIỆN TÍCH */
    int dai, rong, dientich_hcn, chuvi_hcn;
    printf("Bai 2 - Hinh chu nhat\n");
    printf("nhap chieu dai: ");
    if (scanf("%d", &dai) != 1) return 1;
    printf("nhap chieu rong: ");
    if (scanf("%d", &rong) != 1) return 1;
    dientich_hcn = dai * rong;
    chuvi_hcn = 2 * (dai + rong);
    printf("dien tich = %d\n", dientich_hcn);
    printf("chu vi = %d\n\n", chuvi_hcn);

    /* BÀI 3: HÌNH TRÒN - CHU VI VÀ DIỆN TÍCH */
    float bankinh, dientich_tron, chuvi_tron;
    printf("Bai 3 - Hinh tron\n");
    printf("nhap ban kinh hinh tron: ");
    if (scanf("%f", &bankinh) != 1) return 1;
    dientich_tron = PI * bankinh * bankinh;
    chuvi_tron = 2.0f * PI * bankinh;
    printf("dien tich = %.2f\n", dientich_tron);
    printf("chu vi = %.2f\n\n", chuvi_tron);

    /* BÀI 4: ĐIỂM TRUNG BÌNH CÓ HỆ SỐ */
    float toan, ly, hoa, diemtrungbinh;
    printf("Bai 4 - Diem trung binh co he so\n");
    printf("nhap diem toan: ");
    if (scanf("%f", &toan) != 1) return 1;
    printf("nhap diem ly: ");
    if (scanf("%f", &ly) != 1) return 1;
    printf("nhap diem hoa: ");
    if (scanf("%f", &hoa) != 1) return 1;
    diemtrungbinh = (toan * 3.0f + ly * 2.0f + hoa * 1.0f) / 6.0f;
    printf("Diem toan: %.2f (he so x3)\n", toan);
    printf("Diem ly: %.2f (he so x2)\n", ly);
    printf("Diem hoa: %.2f (he so x1)\n", hoa);
    printf("Diem trung binh co he so = %.2f\n\n", diemtrungbinh);

    /* BÀI 5: TÍNH CHU VI VÀ DIỆN TÍCH TAM GIÁC (giả sử đáy và chiều cao) */
    float a, b, c, chuvi_tg, dientich_tg;
    printf("Bai 5 - Tam giac (nhap 3 canh a,b,c; tinh chu vi va dien tich voi a,b la 2 canh va h=b)\n");
    printf("Nhap canh a: ");
    if (scanf("%f", &a) != 1) return 1;
    printf("Nhap canh b: ");
    if (scanf("%f", &b) != 1) return 1;
    printf("Nhap canh c: ");
    if (scanf("%f", &c) != 1) return 1;
    /* chu vi la tong 3 canh */
    chuvi_tg = a + b + c;
    /* neu muon dien tich tam giac voi a la day va b la chieu cao: A = a*b/2 */
    dientich_tg = (a * b) / 2.0f;
    printf("chu vi = %.2f\n", chuvi_tg);
    printf("dien tich (a*b/2) = %.2f\n", dientich_tg);

    return 0;
}
//#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
#include <stdio.h>
#define PI 3.14
int main() {
    int tong , hieu , x , y;
    printf("nhap x: ");
    scanf("%d", &x);
    printf("nhap y: ");
    scanf("%d", &y);
    tong = x + y;
    hieu = x - y;
    printf("tong = %d\n", tong);
    printf("hieu = %d\n", hieu);

//#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN

    int dai , rong , dientich_HCN , chuvi_HCN;
    printf("nhap chieu dai: ");
    scanf("%d", &dai);
    printf("nhap chieu rong: ");
    scanf("%d", &rong);
    dientich_HCN = dai * rong;
    chuvi_HCN = (dai + rong) * 2;
    printf("dien tich = %d\n", dientich_HCN);
    printf("chu vi = %d\n", chuvi_HCN);
//#BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN

    float bankinh_HT , dientich_HT , chuvi_HT;
    dientich_HT = PI * bankinh_HT * bankinh_HT;
    chuvi_HT = 2 * PI * bankinh_HT;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh_HT);
    printf("dien tich = %.2f\n", dientich_HT);
    scanf("%f", &dientich_HT);
    printf("chu vi = %.2f\n", chuvi_HT);
    scanf("%f", &chuvi_HT);

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH CÓ HỆ SỐ
    float toan, ly, hoa, diemtrungbinh;
    printf("nhap diem toan: ");
    scanf("%f", &toan);
    printf("nhap diem ly: ");
    scanf("%f", &ly);
    printf("nhap diem hoa: ");
    scanf("%f", &hoa);
    diemtrungbinh = (toan * 3 + ly * 2 + hoa * 1) / 6;
    printf("\nDiem toan: %.2f (he so x3)\n", toan);
    printf("Diem ly: %.2f (he so x2)\n", ly);
    printf("Diem hoa: %.2f (he so x1)\n", hoa);
    printf("\nDiem trung binh co he so = %.2f\n", diemtrungbinh);

// BÀI 5: TÍNH CHU VI , DIỆN TÍCH
    float a, b, c ,chuvi , dientich;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);
    printf("Nhap chu vi: ");
    scanf("%f", &chuvi);
    printf("nhap dien tich: ");
    scanf("%f", &dientich);
    printf("chu vi = %.2f\n", chuvi );
    printf("dien tich = %.2f\n", dientich);
    chuvi = a + b + c;
    dientich = (a * b) / 2;
    return 0;
}
