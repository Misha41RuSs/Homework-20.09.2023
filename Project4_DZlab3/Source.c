#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	lab_2();
	getchar();
	float a, b;
	puts("\n¬ведите первое число:");
	scanf_s("%f", &a);
	puts("¬ведите второе число:");
	scanf_s("%f", &b);
	printf("|        a * b        |        a + b        |        a - b        |\n");
	printf("-------------------------------------------------------------------\n");
	printf("| %7.1f * %7.1f | %7.1f + %7.1f | %7.1f - %7.1f |\n", a, b, a, b, a, b);
	printf("-------------------------------------------------------------------\n");
	printf("| %16.1f  | %16.1f  | %16.1f  |\n", a * b, a + b, a - b);
	system("pause");
	getchar();
	vklad();
	return 0;
}