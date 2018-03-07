#include <stdio.h>


int my_strlen (char * str){

	int count = 0;

	while(*str++){
	   count++;		
	}

       return count;
}




int main(){

	char ptr[] = "My name is Rajeev ";

	int len = my_strlen (ptr);
	
	printf("The len is %u \n", len);

	return 0;
}


