#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, step, upper;

	lower = 0;
	step = 20;
	upper = 300;

	fahr = lower;

	// iterate until fahr is > upper, printing the value of calculated celsius)
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	} 
	return 0;
}
