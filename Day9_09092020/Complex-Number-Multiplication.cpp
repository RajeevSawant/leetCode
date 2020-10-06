#include <iostream>
#include <string>
using namespace std;



string complexNumberMultiply(string a, string b)
{
        //Boundary conditions, if either of a string doesnt exist return the other
        if(!a.size()) return b;
        if(!b.size()) return a;
        
        // Create variables to store the Real and Img values
        int aReal, aImg, bReal, bImg;
        int first, last;
        
        // Get the real and Img values from the string into Int
        sscanf(a.c_str(), "%d + %di", &aReal, &aImg);
        
        // Get the real and Img values from the string into Int
        sscanf(b.c_str(), "%d + %di", &bReal, &bImg);
        
        // Calculate the first value i.e real * real add it to Img * Img , finally multiply by -1 which is for i square
        first = aReal * bReal + aImg * bImg * (-1);
        
        // Calculate the last part 
        last = aReal * bImg + bReal * aImg;
        
        // convert all to string and return
        return (to_string(first) + "+" + to_string(last) + "i");
}




int main()
{
	string aInp = "1 + 1i";
	string bInp = "1 + 1i";

	string res = complexNumberMultiply(aInp, bInp);

	cout << "Result is " << res << endl;

	return 0;
}
