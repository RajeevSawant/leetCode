#include <stdio.h>
#include <stdlib.h>

int Strncmp(char* dest, char* src, int n)
{
	int i = 0;

	while(n--)
	{
		if (dest[i] != src[i]) return -1;
		i++;
	}
	
	return 0;
}



int main()
{	
	char str1[] = "Rajeev Sawant";
	char str2[] = "Rajeev";

	printf("The result is %d\n", Strncmp(str2, str1, 6));

	//puts(str2);
	return 0;
}

