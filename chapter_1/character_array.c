#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;	/* current line length */
	int max;	/* maximum length so far */
	char line[MAXLINE];	/* current line */
	char longest[MAXLINE];	/* maximum line */

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
	{
		if (len > max)	/* new maximum line */
		{
			max = len;
			copy(longest, line); 
		}
	}

	if (max > 0)	/* there is a line */
	{
		printf("%d\n", max);
		printf("%s", longest); /* print the longest line from input */
	}

	return 0;
}


/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i;

	/* build the line from stdin. -1 from lim (EOF character). newline signals end of line */
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';	/* append EOF to line */
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		++i;
	}
}	
