#include <stdio.h>
#include "Source.h"

void main()
{
	int numberArray[] = { 15,2,31,4,8 };
	int myArray[5];
	int i, j;

	for ( i =0; i< 5; i++) {
		for ( j = 0; j < 4; j++) {
			if (numberArray[j] > numberArray[j+1])
				CallByRef(&numberArray[j], &numberArray[j+1]);
		}
	}

	for ( i=0;i<5;i++)
		printf("%4d", numberArray[i]);

	fgetc(stdin);

}

