#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int *aptr;

	aptr = array;		/* no & needed for an array */

    //aptr = &array[1];   // if we need to access a particular element in the array, then we can use prefix & to the array name.

	//printf("The element is %d\n",*aptr);
    printf("The element is %d\n",*(aptr+1));     // another way to access a particular element from an array is by incrementing the pointer variable 'aptr' which is currently holding the memory location of the array items.
	printf("The element is %d\n",array[1]);
	return(0);
}

