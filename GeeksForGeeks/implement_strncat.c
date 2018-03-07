#include <stdio.h>


char * my_strncat(char * dest, char * src , size_t n){
	char * ptr = dest;

	while (*dest)
	      dest++;

	while (n--){
	    *dest++ = *src++;
	}

	*dest  = '\0';

	return ptr;
}



int main(){
	
	char * str = (char *) calloc (100, 1);

	my_strncat(str, "Rajeev Sawant is not Happy", 12);

	puts(str);
	

	return 0;
}
