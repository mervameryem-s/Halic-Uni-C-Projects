
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	double yazili1, yazili2, ortalama;
	printf("Yazýlý 1 : ");
	scanf("%lf", &yazili1);
	printf("Yazýlý 2 : ");
	scanf("%lf", &yazili2);
	ortalama = (yazili1 + yazili2) / 2;
	printf("Ortalamanýz = %.2lf", ortalama);
	if (ortalama < 50)
		printf("\nKaldýnýz. ");
	else
		printf("\nGeçtiniz. Tebrikler.");
	return 0;
}
