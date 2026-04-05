#include<stdio.h>
int main(void) {
	int a;
	int b;
	int hipotenus;
	for (a = 1; a < 500; a++)
		for (b = a; b < 500; b++)
			for (hipotenus = b + 1; hipotenus <= 500; hipotenus++)
				if ((a * a + b * b) == hipotenus * hipotenus)
					printf("%5d%5d%5d\n", a, b, hipotenus);
	return 0;

}