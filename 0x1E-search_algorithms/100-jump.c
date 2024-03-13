#include "search_algos.h"

/**
*min - find the minimum value of twon integers.
*@a: first int
*@b: second int
*Return: the minimum value
*/

int min(int a, int b)
{
    if(b > a)
        return a;
    else
        return b;
}

/**
*jump_search - searches for a value in an array of integers
*using the jump search algorithm.
*@array: pointer to the first element of the array to search in.
*@size: number of elements in array.
*@value: value to search for.
*Return: the first index where value is located
*        return -1 If value is not present in array or if array is NULL.
*/

int jump_search(int *array, size_t size, int value)
{
    size_t jump, start, end;

    if ((array == NULL) || (sizeof(array) == 0))
        return (-1);
    
    jump = sqrt(size);
    start = 0;
    end = jump;

    
}