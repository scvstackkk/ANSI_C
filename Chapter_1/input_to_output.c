#include <stdio.h>
	

/* copy input to output one character at a time */
int main() 
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);	
}
