#include <stdio.h>

float funkcjaF(float x);
float funkcjaG(float x);
double funkcjaFdouble(double x);
double funkcjaGdouble(double x);

//extern float funkcjaF();

int main(){
	
	printf("floatF - %f\n", funkcjaF(0.008));
	printf("floatG - %f\n", funkcjaG(0.008));
	printf("doubleF - %lf\n", funkcjaFdouble(0.008));
	printf("doubleG - %lf\n", funkcjaGdouble(0.008));

return 0;
}
