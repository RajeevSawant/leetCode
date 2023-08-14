/*
* Given a string s, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and return the new string.
* 
Input: s = "leetcodeisacommunityforcoders"
Output: "ltcdscmmntyfrcdrs"
*/



// C

char* removeVowels(char* s) {

    int start = 0, write = 0;
    while (s[start] != '\0') {

        if ((s[start] != 'a') && (s[start] != 'i') && (s[start] != 'e') && (s[start] != 'o') && (s[start] != 'u')) {
            s[write++] = s[start];
        }
        start++;
    }

    s[write] = '\0';

    return s;
}


// C++

string removeVowels(string s) {

    int lstr = s.length() - 1, start = 0, write = 0;

    while (start <= lstr) {
        if ((s[start] != 'a') && (s[start] != 'e') && (s[start] != 'i') && (s[start] != 'o') && (s[start] != 'u')) {
            s[write++] = s[start];
        }
        start++;
    }
    s.resize(write);
    return s;
}

