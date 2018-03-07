
/*

Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

For example, given the range [5, 7], you should return 4.


*/

#include <iostream>
using namespace std;

/*
int rangeBitwiseAnd(int m, int n) {
        
        if (m < n){
         m  = m & rangeBitwiseAnd (m + 1, n);
	}
	return (m & n);
 }
*/


int rangeBitwiseAnd (int m , int n){
	int count= 0;

	while (m != n){
		++count;
		m >>= 1;
		n >>= 1;
	}
	
	return (m << count);

}
	
int main(){
	int n, m;
	cout << "Enter the numbers " << endl;
	cin >> n >> m;

	cout << "Bitwise And output is  " << rangeBitwiseAnd(m , n) << endl;

	return 0;
}


