#include <stdio.h>

#define MAX_INPUT 1000


int get_clean_line(char line[], int max);

int main()
{
	int len = 0;
	char current_line[MAX_INPUT];
	
	while ((len = get_clean_line(current_line, MAX_INPUT)) > 0)
	{
		printf("%s\n", current_line);
	}
	
	return 0;
}

int get_clean_line(char line[], int max)
{
	int c;

	int i = 0;
	while ((c = getchar()) != EOF && i < max - 1)
	{
		if (c != '\t' && c != ' ' && c != '\n')
		{
			line[i] = c;
			++i;
		}
	}

	line[i] = '\0';
	
	return i;
}
