#include <stdio.h>

int main() 
{

	int b,t,n;
	int c;


	while ((c = getchar()) != EOF) 
	{
		
		if (c == ' ')
		{

			++b;		

		}

		else if (c == '\t')
		{

			++t;
		
		}

		else if (c == '\n')
		{

	
			++n;		

		}

		
		printf("blank character count: %d\n", b);
		printf("tab character count: %d\n", t);
		printf("newline character count: %d\n", n);
		
	
	}	
}
