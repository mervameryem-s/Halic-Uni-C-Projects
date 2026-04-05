#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
		int i, sayi;

	printf("Sayi: ");
	scanf("%d", &sayi);

	for (i = 1; i <= sayi; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}