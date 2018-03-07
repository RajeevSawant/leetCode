

#include <stdio.h>


char * my_strcat (char * destination , char * source){

	char *ptr = destination + strlen(destination);
	
	while (*source != '\0'){
		*ptr++ = *source++;
	}	


	*ptr = '\0';
	
	return destination;
}



int main(){

	char * str = (char *)calloc (100, 1);
			
	my_strcat(str , "techie ");
	my_strcat(str , "Rajeev ");
	my_strcat(str , "C++ ");
	my_strcat(str , "Assembly ");

	puts(str);

	return 0;
}
