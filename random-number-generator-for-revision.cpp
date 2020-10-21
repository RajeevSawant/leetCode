#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int max;
	cout << "Enter the max days completed\n";
	cin >> max;

	srand(time(0));

	cout << "The random number is: " << rand() % max << endl;

	return 0;
}

