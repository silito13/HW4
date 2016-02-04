#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sort.h"

int compare(int a, int b) {
	    return b - a;
}

int compare_qsort(const void * a, const void * b) {
	return (*(int*)b - *(int*)a);
}
