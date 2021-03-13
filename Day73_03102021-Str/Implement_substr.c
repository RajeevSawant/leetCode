#include <stdio.h>


char* substring(char* dest, char* src, int beg, int n){
	
	while (n > 0){
		
		*dest = *(src + beg);
		
		dest++;
		src++;

		n--;
	}

	*dest = '\0';

	return dest;
}




int main(){

	char src[] = "My name is Rajeev Sawant";
	char dest[20];

	 

	substring(dest, src, 7, 7);

	printf("The input string is %s\n\n", src);
	printf("The string is %s\n",dest);
	
	return 0;
}

