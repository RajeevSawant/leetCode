/*
* String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3, If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).
Hints: #92, if 110
*/

string StringCompression(string input) {

	int linp = input.size(), st = 0;
	string res = " ";

	while(st < linp) {
		int rep = 1;

		while (s[i] == s[i + 1] && i < linp - 1) {
			rep++;
			i++;
		}

		res += s[i] + to_string(rep);
		i++;
	}

}