
/*
* Given two binary strings a and b, return their sum as a binary string.
* Input: a = "11", b = "1"
Output: "100"
*/



string addBinary(string a, string b) {
    int i = a.size() - 1, j = b.size() - 1;
    int c = 0;
    string res = "";


    while ((i >= 0) || (j >= 0) || c) {
        c += (i >= 0) ? a[i--] - '0' : 0;
        c += (j >= 0) ? b[j--] - '0' : 0;
        res = to_string(c % 2) + res;
        c /= 2;
    }

    return res;
}