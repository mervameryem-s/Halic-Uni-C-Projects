#include<stdio.h>
#include <locale.h>
#include <string.h>
#define MAX_SIZE 100 //string için Maximum uzunluk
int main()
{
setlocale(LC_ALL, "Turkish");
int i, j, length;
char string[MAX_SIZE];
char reverse[MAX_SIZE];
printf("Metni Gir: ");
gets(string);
length = strlen(string);
j = 0;
for (i = length - 1; i >= 0; i--) 
{
	reverse[j] = string[i];
	j++;
}
reverse[j] = '\0';
printf("Ters : %s", reverse);

return 0;
}