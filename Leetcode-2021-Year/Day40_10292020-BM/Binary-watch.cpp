#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;


vector<int> hour = {1, 2, 4, 8}, minute = {1, 2, 4, 8, 16, 32};


void helper(vector<string>& res, pair<int , int> time, int num, int start_point)
{
	
	if (num == 0)
	{
		res.push_back(to_string(time.first) + (time.second < 10 ? ":0" : ":") + to_string(time.second));
		return;
	}


	for (int i = start_point; i < hour.size() + minute.size(); i++)
	{
		if (i < hour.size())
		{
			time.first += hour[i];
			if (time.first < 12) 
			{
				helper(res, time, num - 1, i + 1);
			}

			time.first -= hour[i];
		}else{
			
			time.second += minute[i - hour.size()];
			if (time.second < 60)
			{
				helper(res, time, num - 1, i + 1);
			}
			time.second -= minute[i - hour.size()];
		}

	}


}

vector<string> readBinaryWatch(int num)
{
	vector<string> res;
	helper(res, make_pair(0, 0), num, 0);
	return res;
}


int main()
{
	int num;
	cout << "Enter the value ";
	cin >> num;

	vector<string> res = readBinaryWatch(num);
	
	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "] \n";

	return 0;
}
