#include <iostream>
#include <string>
using namespace std;



string complexNumberMultiply(string a, string b)
{
	if (!a.size()) return b;
	if (!b.size()) return a;

	int aReal = 0, aImg = 0, bReal = 0, bImg = 0;

	sscanf(a.c_str(), "%d + %di", &aReal, &aImg);
	sscanf(b.c_str(), "%d + %di", &bReal, &bImg);

	int first = aReal * bReal;
	int last = aImg * bImg * -1;

	return (to_string(first + last) + "+" + to_string(aReal * bImg + bReal * aImg) + "i");
}




int main()
{
	string aInp = "1 + 1i";
	string bInp = "1 + 1i";

	string res = complexNumberMultiply(aInp, bInp);

	cout << "Result is " << res << endl;

	return 0;
}
