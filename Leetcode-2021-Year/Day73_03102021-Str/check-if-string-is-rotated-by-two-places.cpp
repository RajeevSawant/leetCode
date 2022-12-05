/*
 * Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.
 */

#include <iostream>
using namespace std;

bool isRotated(string a, string b){

	if (a.length() != b.length()) return false;

	if (a.length() == 0 &&  b.length() == 0) return true;

	if (a.length() == 0 || b.length() == 0) return false;


	string left_sht = "";
	string right_sht = "";
/*
	for(int i = 0; i < 2; i++){

		char c = a[0];

		for (int j = 1; j < a.length(); j++){
			left_sht += a[j];
		}
		left_sht[a.length() - 1] = c;
	}

	for(int i = 0; i < 2; i++){

		char c = a[a.length() - 1];

		for (int j = a.length() - 1; j > 0; j--){
			right_sht[j] = a[j - 1];
		}
		right_sht[0] = c;
	}
	
	int left_cnt = 0, right_cnt = 0;
	for (int i = 0; i < a.length(); i++){

		if (left_sht[i] == b[i]) left_cnt++;

		if (right_sht[i] == b[i]) right_cnt++;
	}
*/

	left_sht = left_sht + a.substr(2, a.length() - 1) + a.substr(0, 2);
	cout << "\n\tThe value of is left_sht " << left_sht << endl;

	
	right_sht = right_sht + a.substr(a.length() - 2, 2) + a.substr(0, a.length() - 2);
	cout << "\n\tThe value of is right_sht " << right_sht << endl;
	
	return ((left_sht == b) || (right_sht == b));
}


int main(){

	
	string a = "amazon";
	string b = "azonam";

	
	cout << "Is Rotating string same " << std::boolalpha << isRotated(a, b) << endl; 

	return 0;
}

