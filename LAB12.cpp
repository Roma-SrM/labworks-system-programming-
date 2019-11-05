
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{

	double a=0.37;
	double b=0.75;
	double x=1.04;
	double y;
	y=asin(x*b)*log10(x*a*a+sqrt(a*x))+exp(0.9)*pow(x*tan(x+b*a),1/3);
	printf("y=%d",y);
	return 0;


}

