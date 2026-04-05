#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    int num1, num2;
    int toplam, fark, carpim, mod;
    float bolum;
    printf("1. Sayý : ");
    scanf("%d", &num1);
    printf("2. Sayý : ");
    scanf("%d", &num2);
    toplam = num1 + num2;
    fark = num1 - num2;
    carpim = num1 * num2;
    mod = num1 % num2;
    bolum = (float)num1 / num2;
    printf("Toplam = %d \n", toplam);
    printf("Fark = %d \n", fark);
    printf("Çarpým = %d \n", carpim);
    printf("Sayý1 in Sayý2 ye Bölümünden Kalan = %d \n", mod);
    printf("Bölüm = %f ", bolum);
    return 0;
}
