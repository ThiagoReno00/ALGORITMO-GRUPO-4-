#include "remove.h"
#include<math.h>

int func_val(int x, int b) {
	double f;
	double a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091, a4 = 0.183166, a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038 * 0.0000001;
	
	f = (a0 + ((a1 + b) * x) + a2 *(x * x) + (a3 *pow(x,3)) + (a4 * pow(x,4)) + (a5 * pow(x,5)) + (a6 * pow(x,6)) + (a7 * pow(x,7)));
	
	return round(f);
}


