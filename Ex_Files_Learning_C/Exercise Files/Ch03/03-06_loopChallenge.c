#include <stdio.h>

int main()
{
    int i;

	for(int x=0;x<20;x++)
		printf("%d\n",x+1);

    i = -10;
    while(i <= 10 )
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }

        i++;
    }
	return(0);
}
