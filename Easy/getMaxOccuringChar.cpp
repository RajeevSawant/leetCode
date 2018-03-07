/*

Return maximum occurring character in an input string

*/


#include <iostream>
#include <vector>
using namespace std;



char getMaxOccuringChar(char *str){

	int lenS = strlen(str), max = 0;
	int count[256] = {0};

	for (int i = 0; i < lenS; i++){
		count[str[i]]++;
	}

       char result;
	
	for (int i = 0; i < lenS; i++){
		
		if (max < count[str[i]]){
			
			max = count[str[i]];
			result = str[i];
		}
	}
        
	return result;
}





int main(){


	char str[] = "sample string";
    	cout << "Max occurring character is " << getMaxOccuringChar(str)<< endl;
	return 0;
}





