#include <stdio.h>

int main()
{
	int i;

	printf("Your choice (1,2,3): ");
	scanf("%d",&i);

	switch(i)
	{
		case 1:
			puts("Red");
			break;
		case 2:
			puts("Green");
			break;
		case 3:
			puts("Blue");
			break;
		default:
			puts("Invalid input");
	}

	return(0);
}

