#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Process:

Read in the numbers one by one, converting them into floats. Then, when we reach the first one that is not a float, we break.

From that index we continue, reading the tags one by one, and executing the functions as we go.

*/

int main(int argc, char *argv[])
{
	double sizes[argc - 2];
	double each;
	int indexOfArg;

	//Read in the sizes
	for (int i = 1; i < argc - 1; ++i){
		if (atof(argv[argc-2]) != 0.0){
			sizes[i-1] = atof(argv[i]);
		}
	}
	
	while (--argc > 0 && (*++argv)[0] == '-'){
		switch (*argv){
			case 'next':
				nextProcess();
			case 'first':
				firstProcess();
			case 'best':
				bestProcess();
			case 'ffd':
				ffdProcess();
			case 'bfd':
				bfdProcess();
			case 'trace':
				traceProcess();
		}
	}
}