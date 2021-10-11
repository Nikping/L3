#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 2 реализация через While
double summ2(double eps)
{ 
	double a = 0;
	int i = 0;
while (fabs(a) <= eps)
{
	a = a+func(i);
	++i;
} 
return a; 
}