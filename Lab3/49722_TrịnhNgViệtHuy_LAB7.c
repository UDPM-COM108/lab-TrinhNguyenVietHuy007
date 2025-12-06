#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bai1() {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("So nguyen am: %d\n", vowels);
    printf("So phu am: %d\n", consonants);
}

void bai2() {
    char username[50], password[50];
    const char correctUser[] = "admin";
    const char correctPass[] = "123456";

    printf("Nhap username: ");
    scanf("%s", username);
    printf("Nhap password: ");
    scanf("%s", password);

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0)
        printf("Dang nhap thanh cong!\n");
    else
        printf("Dang nhap that bai!\n");
}

void bai3() {
    char str[1000];
    int freq[256] = {0};

    getchar(); 
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Cac ky tu xuat hien hon 2 lan:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 2)
            printf("'%c' xuat hien %d lan\n", i, freq[i]);
    }
}

int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Dem nguyen am va phu am\n");
        printf("2. Dang nhap\n");
        printf("3. Tim ky tu xuat hien > 2 lan\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                getchar(); 
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}