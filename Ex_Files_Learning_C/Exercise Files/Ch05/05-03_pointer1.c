#include <stdio.h>

int main()
{
    int a,b;
    int *ptr;

    a = 1234;
    ptr = &a;   // here 'ptr' stores the value in the memory address where variable 'a' is stored
    b = *ptr;   // here variable 'b' is assigned with the value stored in th memory address pointed by the pointer variable '*p'

    printf("A is %d and B is %d\n",a,b);

    return(0);
}
