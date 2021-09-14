#include <stdio.h>

int main()
{
    char a,b,c;
    char *p;

    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';

    printf("a is %c, b is %c and c is %c\n",a,b,c);

    return(0);
}
