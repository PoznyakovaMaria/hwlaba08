#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>     
#include <locale.h>     
#define _USE_MATH_DEFINES     
#include <math.h>

int main() {
	int n;
	float x, result = 0.0;
	setlocale(LC_ALL, "RUS");
	printf("������� ����������� ����� n: ");
	scanf("%i", &n);
	printf("������� ����������� ����� x: ");
	scanf("%f", &x);
	x = x * 3.14 / 180;
	for (int i = 1; i <= n; ++i) {
		result += pow(sin(x), i);
	}
	printf("���������: %1.f", result);
	return 0;
}