#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main()
{
    char *name;

    name = malloc(sizeof(char)* SIZE);
    if(name==NULL)
    {
        puts("Cannot allocate the memory");
        return(1);
    }

    printf("Enter your name: ");
    fgets(name, SIZE, stdin);
    printf("Pleased to meet you, %s", name);

    return(0);
}
