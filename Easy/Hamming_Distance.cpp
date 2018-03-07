
/*

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.


*/



#include <iostream>
#include <vector>
using namespace std;

int hammingDistance (int x , int y){

	int distance = 0 , n = x^y;
	
	while(n){
		
		distance++;
		n = n& (n - 1);
	}
	
	return distance; 

}

int main(){
	int n, m;
	cout << "Enter the numbers " << endl;
	cin >> n >> m;

	cout << "Hamming Distance is  " << hammingDistance(n , m) << endl;
	
}



