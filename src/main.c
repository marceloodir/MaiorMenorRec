/*
 * main.c
 *
 *  Created on: 22/02/2015
 *      Author: marcelo
 */
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

int* MaiorMenorRec(int *array, int len) {
	int *saida;
	if(len==1) {
		saida = (int *)  malloc(2 * sizeof(int));
		*saida = *array;
		*(saida+1) = *array;
	}else{
		saida = MaiorMenorRec(array+1,len-1);
		if(*array < *saida)
			*saida = *array;
		if(*array > *(saida+1))
			*(saida+1) = *array;
	}
	return saida;
}


int main(int argc, char **argv) {
	int array[] = {3,111,512,20,4};
	int *saida = MaiorMenorRec(array,5);

	printf("Menor %d, Maior %d \n",saida[0],saida[1]);

	return EXIT_SUCCESS;
}


