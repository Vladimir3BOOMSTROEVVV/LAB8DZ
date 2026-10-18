#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

void main()
{
	system("chcp 1251");
	float n, res, i;
	res = 1;
	printf("¬ведте n ");
	scanf("%f", &n);
	for (i = 1;i < n;i += 0.1) {
		res *= i;
	}
	printf("%f", res);
	return 0;
}