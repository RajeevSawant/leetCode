#include <stdio.h>


int compare(char *src, char *dest)
{
	while(*src && *dest)
	{
		
		if (*src != *dest)
			return 0;

		src++;
		dest++;
	}

	return (*dest == '\0');

}


char * Strstr(char *src, char *dest)
{
	while (*src != '\0')
	{

		if ((*src == *dest) && compare(src, dest))
		{
			return src;
		}
		src++;
	}
	
	return NULL;
}



int main()
{	
	char str1[] = "Rajeev Sawant";
	char str2[] = "jeev";

	printf("%s\n", Strstr(str1, str2));

	//puts(str2);
	return 0;
}





