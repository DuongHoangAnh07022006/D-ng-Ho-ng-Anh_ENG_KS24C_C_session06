#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nhap so nam (vd: 2024): ");
    scanf("%d", &year);

    printf("Nh?p s? th�ng (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("So th�ng kh�ng hop le! Vui l�ng nhap tu 1 den 12.\n");
        return 1;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; 
            } else {
                days = 28; 
            }
            break;
        default:
            days = 0; 
    }

   
    printf("Th�ng %d nam %d c� %d ng�y.\n", month, year, days);

    return 0;
}

