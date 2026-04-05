#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_NONSTDC_NO_WARNINGS

#include<stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    char string[1000];
    printf("Büyük Harfe Çevrilecek Metni Girin: ");
    gets(string);
    printf("Sonuç: \"%s\"\n", strupr(string));

    return  0;
}
