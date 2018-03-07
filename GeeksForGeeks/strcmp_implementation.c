#include <stdio.h>


int my_strcmp(char * dest, char * src){
	
	
	while(*dest){

		if (*dest != *src)
			break;
                
		dest++;
		src++; 	
	}  
	
	return *(char * )dest - *(char *)src;
} 



int main(){


	char *X = "Rajeev ";
	char *Y = "Sawant ";

	int ret = my_strcmp (X, Y);

	if (ret > 0){
	    printf("\nX is greater than Y\n");
	}else if (ret < 0 ){
	    printf("\nY is greater than X\n");	
	}else{
	    printf("\nX is equal to Y\n"); 	
	}

	return 0;
}






