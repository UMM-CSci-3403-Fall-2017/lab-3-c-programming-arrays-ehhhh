#include <stdlib.h>
#include <mergesort.h>

int* array_merge(int num_arrays, int* sizes, int** values) {
	int result_size = 0;

	for (int i = 0; i < num_arrays; i++) {
		result_size += sizes[i];
	}

	int* result = (int*) calloc(result_size+1, sizeof(int));

	int k = 0;

	for (int i = 0; i < num_arrays; i++) {
		for (int j = 0; j < sizes[i]; j++) {
			result[k] = values[i][j];
			k++;
		}
	}

	return result;
}
