
#include <stdio.h>
int main() {
    double dtb;
    printf("Nhap diem trung binh: ");
    scanf("%lf", &dtb);
    if(dtb>=9)
        printf("xuat sac");
        else if (dtb>=8)
        {printf("gioi");
            /* code */
        }
        else if (dtb>=7)
        {printf("kha");
            /* code */
        }
        else if (dtb>=5)
        {printf("trung binh");
            /* code */
        }
        else
        {printf("yeu!!!");
            /* code */
        }
}       