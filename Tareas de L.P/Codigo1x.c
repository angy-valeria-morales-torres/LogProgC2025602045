#include <stdio.h>
#include <math.h>
int main()
{
	float res;
	int x=3;
	float A = ( 1/2.0) * x;
	float B = (3+x)/2.0;
	float C = 2*x*x;
	float D = (2+3) * x;
	res = (A + B *C)/D;
	printf("res =%f" , res);
	return�0;
}
