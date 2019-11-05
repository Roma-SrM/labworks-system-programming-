
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	double c=1.231;
	double d=1.152;
	double x=8.523;
	double y=7.132;
	double a;
	if(x<=y)
	{
	a=x*y-c*sqrt(y);
	}
	if(x>y)
	{
	a=exp(x)*(y*y)+d;
	}
	printf("a=%d",a);
	return 0;
}





