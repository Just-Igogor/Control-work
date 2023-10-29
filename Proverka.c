/*ЮФУ, ИКТИБ, МОП ЭВМ
Программирование и основы теории алгоритмов
Лаба 1.1 - программирование линейных алгоритмов
КТбо1-6, Смелов Игорь Александрович
Задание G
06.10.2023*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	double x1, y1, x2, y2, x3, y3, x0, y0, AB, BC, CA, AO, BO, CO, p1, p2, p3, S1, S2, S3;

	scanf("%lf %lf %lf %lf %lf %lf\n%lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x0, &y0);

	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	CA = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	AO = sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1));
	BO = sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2));
	CO = sqrt((x0 - x3) * (x0 - x3) + (y0 - y3) * (y0 - y3));

	p1 = (AO + BO + AB) / 2;
	p2 = (BO + CO + BC) / 2;
	p3 = (CO + AO + CA) / 2;

	S1 = sqrt(p1 * (p1 - AO) * (p1 - BO) * (p1 - AB));
	S2 = sqrt(p2 * (p2 - BO) * (p2 - CO) * (p2 - BC));
	S3 = sqrt(p3 * (p3 - CO) * (p3 - AO) * (p3 - CA));

	p1 = (S1 * 2) / AB;
	p2 = (S2 * 2) / BC;
	p3 = (S3 * 2) / CA;

	(p1 <= p2) ? ((p1 <= p3) ? (printf("%.8f", p1)) : (printf("%.8f", p3))) : ((p2 <= p3) ? (printf("%.8f", p2)) : (printf("%.8f", p3)));

	return 0;
}