#include <stdio.h>

void printv(int array[], int size)
{
	int i;
	printf("[");
	for(i=0;i<size;i++)
	{
		if(i == (size-1))
			printf("%d",array[i]);
		else
			printf("%d, ",array[i]);
	}
	printf("]\n");
}
