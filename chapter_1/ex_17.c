#include <stdio.h>

#define MIN 80
#define MAX 1000

int get_line(char line[], int max);

int main()
{
	int len = 0;
	char current_line[MAX];

	while ((len = get_line(current_line, MAX)) > 0)
	{
		if (len > MIN)
		{
			printf("%s\n", current_line);
		}
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
	
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	
	line[i] = '\0';
	return i;	
}
