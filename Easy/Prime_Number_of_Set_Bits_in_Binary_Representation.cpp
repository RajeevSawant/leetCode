
/*


Given two integers L and R, find the count of numbers in the range [L, R] (inclusive) having a prime number of set bits in their binary representation.

(Recall that the number of set bits an integer has is the number of 1s present when written in binary. For example, 21 written in binary is 10101 which has 3 set bits. Also, 1 is not a prime.)



*/



#include <iostream>
#include <vector>
using namespace std;

int count (int num){

	int counter = 0;
	
	while (num){
		
		if ((num & 1) == 1)
			counter++;
	
		num >>= 1;
	}

	return counter;
}


int countPrimeSetBits(int L, int R) {

	vector <int> num; 
	for (int i = L; i <= R; i++){
		
		num.push_back(count(i));	
	}
	
	int size = num.size(), primeCount = 0;
	while (size){
		
		if (num[size - 1] != 2){
			if (num[size - 1] %2 == 0){
				++primeCount;
				--size;
			}

		}else if (num[size - 1] == 2){
			++primeCount;
			--size;
		}
	
	}
        
	return primeCount;
}

int main(){

	int L, R;
	cout << "Enter The number" <<endl;
	cin >> L >> R;

	cout << "Prime Count is " << countPrimeSetBits(L, R) << endl;


}
