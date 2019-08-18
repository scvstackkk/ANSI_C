#include <stdio.h>

#define LOWER 0	 
#define UPPER 300	 
#define STEP 20 


int main() {
	
	/* Print a table of equivalent 
	fahrenheit to celsius temperatures */
	
	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {

		printf("%d\t%.2f\n", fahr, (float) (5 * (fahr - 32) / 9));
	} 
		

	
}
