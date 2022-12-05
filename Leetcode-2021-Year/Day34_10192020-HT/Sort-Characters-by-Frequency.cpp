#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;


string frequencySort(string s)
{
	string s1;
	priority_queue<pair<int, char>> maxHeap;
	unordered_map<char, int> map;


	for (int i = 0; i < s.length(); i++)
	{
		map[s[i]]++;
	}

	for (auto i = map.begin(); i != map.end(); i++)
	{
		maxHeap.push({i -> second, i -> first});
	}

	while(maxHeap.size() > 0)
	{
		int freq = maxHeap.top().first;
		char ele = maxHeap.top().second;

		for (int i = 1; i <= freq; i++)
			s1 += ele;

		maxHeap.pop();
	}

	return s1;
}


int main()
{
	string inp;

	cout << "Enter the string \n";
	cin >> inp;

	string res = frequencySort(inp);

	cout << "The result is " << res << endl;
	return 0;
}
