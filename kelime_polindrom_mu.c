#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	char str[1000];
	printf("Metni Gir: ");
	gets(str);
	int i, length;
	int flag = 0;
	length = strlen(str);

	for (i = 0; i < length; i++) {
		if (str[i] != str[length - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("%s polindrom deðildir.", str);
	}
	else {
		printf("%s polindromdur.", str);
	}
	return 0;
}
