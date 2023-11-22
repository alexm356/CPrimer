#include <stdio.h>

/*
*When you use empty brackets to initialize an array, compiler counts number of items in list and makes array that large.
*sizeof operator gives size, in bytes of object following it.
*  sizeof days is size in bytes of whole array.
* sizeof days[0] is size in bytes of one element of array/.

* dividing size of entire array by size of one elements tells us how many elements are in array.

*/

int main(){

    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30 ,31 ,30, 31};

    int index;

    for(index = 0; index < sizeof days / sizeof days[0]; index++)
    printf("Month %2d has %d days.\n", index + 1, days[index]);

    return 0;
}