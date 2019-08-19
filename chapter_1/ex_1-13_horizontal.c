#include <stdio.h>

#define MAX_CHARACTERS 20
#define IN 1
#define OUT 0


/*
 
Ex. 1-13 draws a histogram with ASCII characters representing the lengths of words fed to stdin.
words are defined as having no white space characters. Without using dynamic memory allocation, words are limited to 20 characters.

*/

int main() {
	
	int c, state, num_chars, max_word_count;
	int word_lengths[MAX_CHARACTERS + 2]; // the 0 index will not be used, so +1. +1 for 20+ character words.

	state = OUT;
	num_chars = 0;
	max_word_count = 0;	

	for (int i = 0; i < MAX_CHARACTERS + 2; ++i) {
		word_lengths[i] = 0;
	} 

	// read input, count word lengths, populate the array
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				state = OUT;
				++word_lengths[num_chars];
				if (word_lengths[num_chars] > max_word_count) {
					max_word_count = word_lengths[num_chars];
				}
				num_chars = 0;
			}
		}
		else {
			if (num_chars < MAX_CHARACTERS + 1) {
				state = IN;
				++num_chars;
			}
		}
	}


	printf("\n");

	for (int i = 0; i < MAX_CHARACTERS + 2; ++i) {
		printf("%d: %d", i,word_lengths[i]);
		printf("\n");
	}

	/*
	// print the top border
	for (i = 0; i < max_word_count + 4; ++i) {
		printf("_");
	}
	
	printf('\n');
	
	// print the histogram data
	for (i = 1; i < MAX_CHARACTERS + 2; ++i) {
		if (i == 21) {
			printf("20+")
		}
	} 

	*/
	return 0;
}
