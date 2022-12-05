#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Strncat(char *des, char *src, int n)
{
	char *ptr = des + strlen(des);

	while(*src != '\0' && n--)
	{
	    *ptr++ = *src++;	
	}

	*ptr = '\0';
}


int main()
{	
	char str1[] = "Rajeev Sawant";
	char str2[] = "Techie";

	Strncat(str2, str1, 3);

	puts(str2);
	return 0;
}
