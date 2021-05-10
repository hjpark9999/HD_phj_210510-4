#include <stdio.h>
#include "Source.h"

void main()
{
	int numberArray[] = { 15,2,31,4,8 };
	int myArray[5];
	int i, j;

	for (i = 0; i <5; i++) {
		myArray[i] = numberArray[i];
	}

	for ( i =0; i< 5; i++) {
		for ( j = 0; j < 4; j++) {
			if (myArray[j] > myArray[j+1])
				CallByRef(&myArray[j], &myArray[j+1]);
		}
	}

	for ( i=0;i<5;i++)
		printf("%4d", myArray[i]);

	fgetc(stdin);

}

