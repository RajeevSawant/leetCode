#include <stdio.h>
#include <stdlib.h>

void Strncpy(char* dest, char* src, int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	// Ensure trailing null byte is copied
	dest[++i] = '\0';
}


int main()
{	
	char *str1 = "Rajeev Sawant";
	char *str2 = (char *)malloc(100 * sizeof(char));

	Strncpy(str2, str1, 8);

	puts(str2);
	return 0;
}

