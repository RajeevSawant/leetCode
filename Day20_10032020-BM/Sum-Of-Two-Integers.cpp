#include <iostream>
using namespace std;


int getSum (int a, int b)
{
	int carry = 0;
	while(b)
	{	
	     // Bit that is set in both numbers	
	     carry = a & b;
	     
	     // get kind of remainder
     	     a = a ^ b;	     

	     // code will fail for 1 or -1 , left shift operator gives error for negative value 
	     b = (unsigned)carry << 1;
	}

	return a;
}



int main()
{
	
	int inp1, inp2, res;

	cout << "Enter the number to be added \n";
	cin >> inp1 >> inp2;

	res = getSum (inp1, inp2);

	cout << "The sum is " << res << endl;

	return 0;
}

