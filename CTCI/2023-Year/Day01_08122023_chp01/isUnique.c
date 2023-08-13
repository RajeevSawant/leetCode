#include <stdio.h>
#include <stdbool.h>

bool isUnique(char* istr) {
	int checker = 0, i = 0;
	while (istr[i] != '\0') {
		int val = istr[i] - 'a';

		if ((checker & (1 << val)) > 0) {
			return false;
		}
		checker |= (1 << val);
	}
}

int main() 
{
	char istr[] = "My name is Rajeev";
	bool rResult = isUnique(istr);
	printf("Are all the char unique ? %s", rResult ? "true" : "false");
}