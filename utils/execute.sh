#!/bin/bash

STR="_tut"
SEARCH_DIRECTORY=".."

executeCFile() {
	if [ ${1: -2} == ".c" ]; then
		if [[ "$1" != *$STR* ]]; then
			echo -e "================================================================================================================\n"
			echo -e "Executing: " $1 "\n"
			OBJFILE="${1%.*}"
			gcc $FILE -o $OBJFILE -lm
			./$OBJFILE
			rm $OBJFILE
			echo -e "================================================================================================================\n\n"
			read -p "Press enter to continue"
		fi
	fi
}

parseDirectory() {
	for FILE in $1/*; do
		if [ -d "$FILE" ]; then
			parseDirectory $FILE
		else
			executeCFile $FILE
		fi
	done
}

parseDirectory $SEARCH_DIRECTORY
