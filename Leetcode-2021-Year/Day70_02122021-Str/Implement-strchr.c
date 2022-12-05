#include <stdio.h>


char * Strchr(char *dest, int n)
{
	while(*dest != '\0')
	{
		if (*dest == (char)(n)) return dest;
		dest++;
	}
	
	return 0;
}


int main()
{
	char str1[] = "Rajeev Sawant";
//	char *str2 = (char *)malloc(100 * sizeof(char));

	char *ptr = Strchr(str1, 'w');

	puts(ptr);
	return 0;
}

