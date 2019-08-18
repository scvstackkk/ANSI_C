#include <stdio.h>

#define IN 1
#define OUT 0


int main() {

	int c, nl, nw, nc, state;

	nl, nw, nc = 0;

	state = OUT;

	while ((c = getchar()) != EOF) {
	
		++nc;

		if (c == '\n' || c == '\t' || c == ' ') {
			state = OUT;
		}

		if (c == '\n') {
			++nl;
		}
		
		else if (state == OUT && c != ' ' && c != '\n' && c != '\t') {
			state = IN;
			++nw;
		}
	}

	printf("\n");
	printf("Newlines: %d, words: %d, characters: %d\n", nl, nw, nc);
	
	return 0;
}
