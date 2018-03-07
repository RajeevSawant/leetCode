

#include <stdio.h>


char * my_strncpy ( char * dest, char * src, size_t num){
	
	if (dest == NULL){
		return NULL;
 	}	

	
	char * ptr = dest;

	while(num--){
	     *dest++ = *src++;
	}

	*dest = '\0';
	
	return ptr;
}





int main(){

	char * src = "Rajeev is Genius";
	char dest[20];

	size_t num = 6;

	my_strncpy (dest, src, num);
	puts(dest);

	printf("Size of size_t %lu ", sizeof (size_t) );

	return 0;
}


