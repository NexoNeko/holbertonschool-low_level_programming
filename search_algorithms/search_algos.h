#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/**==================================*/
/**========= header files ===========*/
/**==================================*/
#include <stdio.h>
#include <stddef.h>


/**==================================*/
/**===== function signatures=========*/
/**==================================*/

/** linear_search - performs a linear search on an array */
int linear_search(int *array, size_t size, int value);

/** binary_search - performs a binary search on an array */
int binary_search(int *array, size_t size, int value);

/** print_array - Prints N elements of an array of integers */
void print_array(int *a, int n);

/** binary_search_engine - Linear search, but it moves up or down */
int execute_binary_search(int *array, size_t size, int value, int operation);

#endif
