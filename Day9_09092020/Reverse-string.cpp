#include <iostream>
#include <string>
using namespace std;



void reverseString(char* S, int sSize)
{
	int lo = 0, hi = sSize - 1;
	char temp;

	while (lo < hi)
	{
		temp = S[lo];
		S[lo] = S[hi];
		S[hi] = temp;

		lo++; hi--;
	}

}

void printString (char* s, int sSize)
{
	for (int i = 0; i < sSize; i++)
		cout <<" "<<s[i];

	cout << endl;
}

int main()
{
	char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	//int size = strlen(arr);
	int size = sizeof(arr);
	
	printString(arr, size);

	reverseString(arr, size);

	printString(arr, size); 

	return 0;
}
