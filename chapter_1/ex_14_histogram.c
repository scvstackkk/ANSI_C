#include <stdio.h>

#define ANSCII_CHARACTERS 128

int main()
{
	int c, i, j;
	int frequency[ANSCII_CHARACTERS];

	for (i = 0; i < ANSCII_CHARACTERS; ++i)
	{
		frequency[i] = 0;
	}
	
	printf("Enter input. Finish with CTRL^D");
	while ((c = getchar()) != EOF)
	{
		++frequency[c];
	}

	printf("\nCharacter | Frequency\n");
	for (i = 0; i < ANSCII_CHARACTERS; ++i)
	{
		int current_frequency = frequency[i];
		char current_char = (char) i;
		
		if (current_frequency > 0)
		{	
			printf(" %5d : %5d |", i, current_frequency);
			for (j = 0; j < current_frequency; ++j)
			{
				printf("-");
			}
			printf("\n");
		}
	}

	return 0;
}
