#include <iostream>
#include <string>
using namespace std;

/*
 int strStr(char * haystack, char * needle){
    
    int m = strlen(haystack), n = strlen(needle);
    
    for (int i = 0; i <= (m - n); i++)
    {
        int j = 0;
        
        for (; j < n; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        
        if (j == n) return i;
    }
    
    return -1;
    
}


KMP Algorithm:
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        if (!n) {
            return 0;
        }
        vector<int> lps = kmpProcess(needle);
        for (int i = 0, j = 0; i < m;) {
            if (haystack[i] == needle[j]) {
                i++, j++;
            }
            if (j == n) {
                return i - j;
            }
            if (i < m && haystack[i] != needle[j]) {
                j ? j = lps[j - 1] : i++;
            }
        }
        return -1;
    }
private:
    vector<int> kmpProcess(string needle) {
        int n = needle.size();
        vector<int> lps(n, 0);
        for (int i = 1, len = 0; i < n;) {
            if (needle[i] == needle[len]) {
                lps[i++] = ++len;
            } else if (len) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
        return lps;


 */

int strStr(string haystack, string needle)
{
        int m = haystack.length(), n = needle.length(); 
        
        // i <= (m - n) is if both the needle and the haystack are empty then, it should return 0.
        for (int i = 0; i <= (m - n); i++)
        {
            int j = 0;
            for (; j < n; j++)
            {
                // compare haystack with needle if the values dont match then break
                if (haystack[i + j] != needle[j])
                    break;
            }
            
            // if J == n meaning all the values of needle match to haystack 
            if (j == n) return i;
        }
        
        return -1;
}



int main()
{
	string inp1, inp2;


	cout << "Enter the haystack string \n";
	cin >> inp1;

	cout << "Enter the needle string \n";
	cin >> inp2;

	int result = strStr(inp1, inp2);

        cout << "The index of first occurance of needle in haystack is " << result << endl;

	return 0;
}

