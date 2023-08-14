/*
* 1108. Defanging an IP Address

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

eg:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/

// C
char* defangIPaddr(char* address) {

    char* res = calloc(1, sizeof("###[.]###[.]###[.]###"));
    char* resPtr = res;
    int start = 0, write = 0;

    while (address[start] != '\0') {
        if (address[start] == '.') {
            res[write++] = '[';
            res[write++] = '.';
            res[write++] = ']';
        }
        else {
            res[write++] = address[start];
        }
        start++;
    }

    return resPtr;
}



// C++

string defangIPaddr(string address) {
    int laddr = address.length() - 1, start = 0;
    string res = "";

    while (start <= laddr) {

        if (address[start] == '.') {
            res += "[.]";
        }
        else {
            res += address[start];
        }
        start++;
    }

    return res;
}