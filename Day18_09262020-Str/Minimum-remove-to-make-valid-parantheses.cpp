#include <iostream>
#include <string>
using namespace std;


string minRemoveToMakeValid(string s)
{
        // becuase later i would be pr-decremented 
        int i = s.size();
        
        // to keep track of closing brackets 
        int balance = 0;
        
        
        for (int j = s.size() - 1; j >= 0; j--)
        {
            if (s[j] == ')') balance++;
            else if (s[j] == '(')
            {
                if (balance == 0) continue;
                balance--;
            }
            
            // copy the elements backwards leaving the extra opening brackets if any
            s[--i] = s[j];
        }
        
        int len = 0;
        
        // to keep track of the opening brackets 
        balance = 0;
        
        // use the same value of i since it si already reached begining. 
        for (; i < s.size(); i++)
        {
            if (s[i] == '(') balance++;
            else if (s[i] == ')')
            {
                if (balance == 0) continue;
                balance--;
            }
            
            s[len++] = s[i];
        }
        // return all the elements after len
        s.erase(len);
        
        return s;
}






int main()
{
	string inp, result;

	cout << "Enter the input string \n";
        cin >> inp; 	

	result = minRemoveToMakeValid(inp);

	cout << "The result is " << result << endl;

	return 0;
}


