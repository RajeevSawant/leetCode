#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>

using namespace std;



int wordLadder(string beginWord, string endWord, vector<string>& wordList)
{
	
	unodered_set<string> dict(wordList.begin(), wordList.end());
	queue<string> que;

	que.push(beginWord);
	
	if (!(dict.find(endWord) != dict.end()))
	{
		return 0;
	}
	int ladder = 1;

	while(!que.empty())
	{
		int n = que.size();

		for (int i = 0; i < n; i++)
		{
			string word = que.front();
			que.pop();

			if (word == endWord)
			{
				return ladder;
			}

			dict.erase(word);
			for (int j = 0; j < word.size(); j++)
			{
				char c = word[j];

				for (int k = 0; k < 26; k++)
				{
					word[j] = 'a' + k;

					if (dict.find(word) != dict.end())
					{
						que.push(word);
					}
				}
				word[j] = c;
			
			}

		}

		ladder++;
	}

	
	return 0;
}



/*
 *
 *  https://www.youtube.com/watch?v=M9cVl4d0v04
 *
 */
