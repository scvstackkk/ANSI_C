#include <stdio.h>

#define ASCII_CHARACTERS 128

int main()
{
	int c;
	int frequencies[ASCII_CHARACTERS];

	for (int i = 0; i < ASCII_CHARACTERS; i++)
	{
		frequencies[i] = 0;
	}
		
	printf("Enter input and press CTRL+D\n");
	while ((c = getchar()) != EOF)
	{
		frequencies[c]++;
	}

	printf("Character | Frequency\n");
	for (int i = 0; i < ASCII_CHARACTERS; i++)
	{
		int current_frequency = frequencies[i];
		if (current_frequency > 0)
		{
			printf(" %5d : %5d\n", i, current_frequency);		
		}

	
	}

	return 0;
}
