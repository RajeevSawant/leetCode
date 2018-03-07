/*

Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example:
For num = 5 you should return [0,1,1,2,1,2].

*/
/*

Method :

- go from 1 to n
- count 1's in every num
- push the count in vector

*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int count(int num){
	int counter = 0;
	while (num) {
		
		if ((num & 1) == 1)
			counter++;
		
		num = num >> 1;
	}
	return counter;
}


vector<int> countBits(int num) {
	
	vector <int> bits;

	for (int i = 0 ; i <= num; i++){
		
		bits.push_back(count(i));		
		
	}

	return bits;
}




int main(){
	ostream_iterator<int> screen (cout , " ");
	int n = 0;
	cout << "Enter the number" << endl;
	cin >> n;

	vector <int> vtr ;
	vtr = countBits(n);

	copy (vtr.begin(), vtr.end(), screen);
	cout << endl;
	return 0;

}

