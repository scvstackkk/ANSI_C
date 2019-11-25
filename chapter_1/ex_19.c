#include <stdio.h>

#define MAX_INPUT 1000

int get_line(char line[], int max);
void reverse(char s[]);

int main()
{
	int len = 0;
	char current_line[MAX_INPUT];

	while ((len = get_line(current_line, MAX_INPUT)) > 0)
	{
		reverse(current_line);
		printf("%s\n", current_line);
	}

	return 0;
}

int get_line(char line[], int max)
{
	int c, i;

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

void reverse(char s[])
{
	int i, j, tmp, end;

	j = 0;
	
	while (s[j] != '\0')
	{
		++j;
	}
	end = j;
	--j;

	for (i = 0; i < j; ++i, --j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	s[end] = '\0';
}
