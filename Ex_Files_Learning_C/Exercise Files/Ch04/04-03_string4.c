#include <stdio.h>
#include <string.h>

int main()
{
	char first[] = "I would like to go ";
	char second[] = "from here to there\n";
	char buffer[50];

	strcpy(buffer,first);   // value in 'first' variable is copied to 'buffer' variable
	strcat(buffer,second);  // value in 'second' variable is concatenated to 'buffer' variable
	puts(buffer);

	return(0);
}

