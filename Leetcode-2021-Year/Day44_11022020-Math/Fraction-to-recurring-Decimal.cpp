#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


string fractionToDecimal(int numerator, int denominator)
{
	if (!numerator)
	{
		return "0";
	}
	
	string ans;

	if (numerator > 0 ^ denominator > 0)
	{
		ans += '-';
	}

	long n = labs(numerator), d = labs(denominator), r = n % d;

	ans += to_string(n / d);

	if (!r)
	{
		return ans;
	}

	ans += '.';

	unordered_map<long, int> rs;

	while(r)
	{
		if (rs.find(r) != rs.end())
		{
			ans.insert(rs[r], "(");
			ans += ')';
			break;
		}

		rs[r] = ans.size();
		r *= 10;
		ans += to_string(r/d);
		r %= d;
	}
	
	return ans;
}



int main()
{
	int num, deno;

	cout << "Enter the numerator & denominator ?\n";
	cin >> num >> deno;


	string res = fractionToDecimal(num, deno);

	cout << "The resuls is " << res << endl;

	return 0;
}
