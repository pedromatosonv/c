#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, step, upper;

	lower = 0;
	step = 20;
	upper = 300;

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	} 
	return 0;
}
