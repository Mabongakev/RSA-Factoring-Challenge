#!/usr/bin/bash
FILE=$1
while read NUMBERS;
do
	factors=($(factors NUMBERS))
	echo "$NUMBERS=$(($NUMBERS/${factors[1]}*${factors[1]}))"
done < FILE
