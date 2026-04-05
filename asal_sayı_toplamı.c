#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int i, sayi, toplam = 0;
	printf("Sayý:");
	scanf("%d", &sayi);
	for (i = 1; i <= sayi; i++)
	{
		toplam += i;
	}
	printf("1-%d arasý sayýlarýn toplamý : %d", sayi, toplam);
	return 0;
}