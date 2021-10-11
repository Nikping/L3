#include <stdio.h>
#include <math.h>
_Bool isInArea(double x, double y)
{
	if (x <= 1 && y <= 1 && pow(x, 2) + pow(y, 2) >= 1)
		return(1);		
	else 
		return(0);
 }

double func(double x)
{ 
	double f;
	x <= 4 ? (f = sqrt(pow(x, 2) + 4)) : (f = cos(abs(2 + x)));
	return(f);
}

_Bool isInArea(double x, double y);
double func(double x);

int main(void)
{
	double x, y;
	int n;
	printf("Choose task 1 or 2: \n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("task ¹1:\n");
		printf("x = ");
		scanf_s("%lf", &x);
		printf("y = ");
		scanf_s("%lf", &y);

	isInArea(x, y);
	printf("%d", isInArea(x, y));
	break;
	case 2:
	printf("task ¹2:\n");
	printf("x = ");
	scanf_s("%lf", &x);
	func(x);
	printf("%.3lf", func(x));
	break; 
	default:
		printf("incorrect information, please try again ");
		break;
	} 
	return(0);
}