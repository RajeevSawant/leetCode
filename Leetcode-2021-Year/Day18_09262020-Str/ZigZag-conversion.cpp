#include <iostream>
#include <string>
using namespace std;


string convert (string s, int nRows)
{
        // if no.of rows are less than 1 the return the string itself as the code is possible for multiple rows. 
        if (numRows <= 1)
            return s;
        
        const int len = (int)s.length();
        
        // create a string array to store the value in seprate rows 
        string* str = new string[numRows];
        
        // start from row 0  which would be at step 1.
        int row = 0, step = 1;
        
        for (int i = 0; i < len; i++)
        {
            str[row].push_back(s[i]);
            
            if (row == 0)
            {
                // to increase the row by 1 step;
                step = 1;
            }
            else if (row == numRows - 1)
            {
                // start decreasing the row , when we reach to last row
                step = -1;
            }
            
            // increase row by 1 step in each loop
            row += step;
        }
        
        // empty the string 
        s.clear();
        
        // append each row
        for (int j = 0; j < numRows; j++)
        {
            s.append(str[j]);
        }
        
        // free the memeory
        delete[] str;
        
        
        return s;
}



int main()
{
	string inp, result;
	int nRows = 0;
	
	cout << "Enter the String \n";
	cin >> inp;

	cout << "Enter the No. Of Rows \n";
	cin >> nRows;

	result = convert(inp, nRows);

	cout << "Result is " << result << endl;
	
	return 0;
}
