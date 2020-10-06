#include <iostream>
#include <string>
using namespace std;



void reverseString(char* S, int sSize)
{
        // So that we can swap values starting from extreme end 
        int lo = 0, hi = s.size() - 1;
        
        // Need temp to store the value temporarly 
        char temp;
        
        // Loop until lo is less than hi , when lo is equal to hi loop stops as we have reached the middle of the loop
        while (lo < hi)
        {
            // store the value present at pos lo to temp 
            temp = s[lo];
            
            //copy the value stored at hi pos in lo pos and increment lo 
            s[lo++] = s[hi];
            
            //copy temp character to hi pos and decrement hi pos
            s[hi--] = temp;
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
