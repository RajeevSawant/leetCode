

#include <stdio.h>

char * my_strncat (char * dest, char * src, size_t n){
	
	char* ptr = dest;
	
	while(*dest){
	     *dest++;
         }

	while(n--){
	   *dest++ = *src++;
        }

	*dest = '\0';

	return ptr;

}



char * my_strcat (char * dest, char * src){

	char * ptr = dest;

	while (*dest){
	     *dest++;
        }

	while(*src){
	     *dest++ = *src++;
        }

	*dest = '\0';

	return ptr;	
}




int main(){

   char * str = (char *) calloc (100, 1);

	my_strcat (str , "Rajeev ");
	my_strcat (str, "Sawant ");
	my_strcat (str, "is Iron Man ");

	my_strncat (str, " Yes he is ", 3);

	puts(str);

        return 0;
}
