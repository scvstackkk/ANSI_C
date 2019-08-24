#!/bin/bash

FILE="bell_dist.txt";

MAX_CHARACTERS=20;
MIN_FREQ=5;
MAX_FREQ=50;
INCREMENT=5;
WORD_SIZE=0;

CURRENT_WORD="";
CURRENT_FREQ=$MIN_FREQ;
CURRENT_LINE="";

echo "" > $FILE;

for ((i = 0; i < MAX_CHARACTERS + 1; i++)); do

	WORD_SIZE=$i;

	if [[ $CURRENT_FREQ == $MAX_FREQ ]]; then
		INCREMENT=-5;
	elif [[ $CURRENT_FREQ == $MIN_FREQ ]]; then
		INCREMENT=5;
	fi

	for ((j = 0; j < WORD_SIZE; j++)); do
		CURRENT_WORD+="x";
	done

	for ((j = 0; j < CURRENT_FREQ; j++)); do
		CURRENT_LINE+="$CURRENT_WORD ";
	done

	echo $CURRENT_LINE >> $FILE;
	
	CURRENT_WORD="";
	CURRENT_LINE="";
	CURRENT_FREQ=$((CURRENT_FREQ + INCREMENT));

done



