#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int vklad()
{
    float summvklada;
    float procenti;
    int years;
    printf("������� ����� ������: ");
    scanf("%f", &summvklada);
    printf("������� ���������� ������: ");
    scanf("%f", &procenti);
    printf("������� ���� ������ � �����: ");
    scanf("%d", &years);
    float dohod = summvklada * procenti/100 * years;
    printf("����� �� ������ ��������: %.2f\n", dohod);
    return 0;
}
