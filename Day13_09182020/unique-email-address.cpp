#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int numUniqueEmails(vector<string>& emails)
{
	unordered_set <string> trimmed_emails;

	for (auto& email: emails)
	{
		string temp;
		auto it = email.begin();

		for (; *it != '@' && *it != '+'; ++it)
		{
			if (*it != '.')
			{
			   temp += *it;
			}
		}


		it = find(it, email.end(), '@');
		temp.append(it, email.end());
		
		trimmed_emails.insert(temp);
	}

	return trimmed_emails.size();
}



int main()
{
	vector<string> input{ "test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com" };

	int res = numUniqueEmails(input);

	cout << "The Number Of Unique Emails are " << res << endl;
	return 0;
}
