
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{

	double k=9.7;
	double d=2.9;
	double w=3.0;
	double s,r;
	s=sqrt(k*w+d*d)+cos(k/d);
	r=pow(d+w,2)/d*log(k);
	printf("d=%d\nr=%d",s,r);

}

