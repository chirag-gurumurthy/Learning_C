#include <stdio.h>
#include <string.h>

int main()
{
	char firstName[24];
	char secondName[24];
	char fullName[64];

	printf("Enter first name: ");
	fgets(firstName,24,stdin);
	printf("Enter second name: ");
	fgets(secondName,24,stdin);

	strcpy(fullName,firstName);
	strcat(fullName,secondName);
	puts(fullName);

	return(0);
}
