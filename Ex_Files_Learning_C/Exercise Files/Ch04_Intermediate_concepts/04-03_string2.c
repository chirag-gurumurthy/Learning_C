#include <stdio.h>
#include <string.h>

int main()
{
	char inp[64];		/* 63 characters plus null */
	int len;

	printf("Instructions: ");
	fgets(inp,64,stdin);
	len = strlen(inp);
	printf("You typed %d characters of instructions.\n",len);

	return(0);
}

