/*
* 
* Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
* 
* 
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
*/


void addingBrac(vector<string>& res, string local, int n, int m) {
    if (n == 0 && m == 0) {
        res.push_back(local);
        return;
    }
    else {
        if (m > 0) {
            addingBrac(res, local + ")", n, m - 1);
        }
        if (n > 0) {
            addingBrac(res, local + "(", n - 1, m + 1);
        }
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> res;

    addingBrac(res, "", n, 0);
    return res;
}