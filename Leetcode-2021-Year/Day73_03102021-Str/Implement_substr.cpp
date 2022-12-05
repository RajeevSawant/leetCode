#include <iostream>

using namespace std;



string substr(string& dest, string src, int beg, int n){

	while (n > 0){

		dest += src[beg++];
		
	 	n--;
	}


	return dest;
}

int main(){
	
	string dest;
	string src = "This is Rajeev Sawant";


	substr(dest, src, 7, 7);

	cout << "The result is " << dest << endl;
	return 0;
}

