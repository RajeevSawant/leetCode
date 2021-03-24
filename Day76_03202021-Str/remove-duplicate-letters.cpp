

#include <vector>



string removeDuplicateLetter(string s){

	vector<int> cand(256, 0);
	vector<bool> visited(256, false);


	for(char c: s)
		cand[c]++;


	string result = "";

	for (char c: s){

		cand[c]--;


		if (visited[c]) continue;

		while(c < result.back() && cand[result.back()]){
			visited[result.back()] = false;
			result.pop_back();
		}

		result += c;

		visited[c] = true;

	}


	return result;
}
