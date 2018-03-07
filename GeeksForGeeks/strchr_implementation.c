
#include <stdio.h>


char * my_strchr (char *source, size_t liter){
	
	while (*source){

		if (*source == liter)
			break;
	
		source++;	
	}		
	
	return source;
}


char * my_strncat (char * dest, char * src, size_t n){

	char * ptr = dest;
	
	while (*dest++);
	
	while (n--){
	    *dest++ = *src++;	
	}
	
	*dest = '\0';
	
	return ptr;
} 


int main(){
	
    //    char source[100], dest[100], ch;

     char source[] = "This is a test \n";
     char ch = "t";

     char *p = strchr (source , ch);
     
	if (*p == '\0'){
		printf("Character Not Found \n");	
	}else{
		printf("Character found \n");
	}


	char srce[] = "Rajeev ";
	char destr[] = "Sawant ";

	int num = 2;

	my_strncat(srce, destr, num);

	puts(srce);



		
	return 0;
}

