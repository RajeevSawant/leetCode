/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.


Input: n = 1
Output: true
Explanation: 20 = 1

*/

bool isPowerOfTwo(int n) {
    int count = 0;

    while (n > 0) {
        if (n & 0x01) {
            count++;
        }
        n >>= 1;
    }

    return (count == 1);
}