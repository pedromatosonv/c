#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */	
int main()
{
	float fahr, celsius;
	int lower, step, upper;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	
	printf("#=== Fahrenheit to Celsius Table ===#\n");

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	} 
	return 0;
}
