#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    int num1;
    int num2;
    int temp;
    printf("Sayý1 : ");
    scanf("%d", &num1);
    printf("\nSayý 2 : ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Deðiþiklikten sonraki deðerler \n");
    printf("Sayý 1 : %d", num1);
    printf("\nSayý 2 : %d", num2);
}
