#include <stdio.h>

#define COLUMN_COUNT 5
#define MAX_INPUT 1000

char current_line[MAX_INPUT];
char detab_line[MAX_INPUT];

int get_line(char line[], int max);
void detab(char line[]);

int main()
{
	int len = 0;

	while ((len = get_line(current_line, MAX_INPUT)) > 0)
	{
		detab(current_line);
		printf("%s\n", detab_line);
	}

	return 0;
}

int get_line(char line[], int max)
{
	int i, c;

	for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}

	if (c == '\n') // reached the end of the current line of input
	{
		line[i] = c;
		++i;
	}

	line[i] = '\0'; // terminate the current line
	
	return i;
}

void detab(char line[])
{
	int i, j, k, l;
	
	j = 0;
	while ((line[j]) != '\0')
	{
		++j; // get the length of the current line
	}
	
	l = 0;
	for (i = 0; i < j; ++i)
	{
		if ((line[i]) != '\t')
		{
			detab_line[l] = line[i];
			++l;
		}

		else
		{
			for (k = 0; k < COLUMN_COUNT; ++k)
			{
				detab_line[l] = ' ';
				++l;
			}
		}
	}

	detab_line[l] = '\0';
}
