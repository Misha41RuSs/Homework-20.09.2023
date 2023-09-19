#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int vklad()
{
    float summvklada;
    float procenti;
    int years;
    printf("Введите сумму вклада: ");
    scanf("%f", &summvklada);
    printf("Введите процентную ставку: ");
    scanf("%f", &procenti);
    printf("Введите срок вклада в годах: ");
    scanf("%d", &years);
    float dohod = summvklada * procenti/100 * years;
    printf("Доход по вкладу составит: %.2f\n", dohod);
    return 0;
}
