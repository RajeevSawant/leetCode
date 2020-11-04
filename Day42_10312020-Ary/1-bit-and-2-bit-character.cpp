#include <iostream>
#include <vector>
using namespace std;


    bool isOneBitCharacter(vector<int>& bits) {
        
        // Initialize flag
        int flag = 0;
        
        // Go from 0 to bits.size()
        for (int i = 0; i < bits.size();)
        {
            // if 1st element is 1 then its a two bit so incr i by 2
            if (bits[i] == 1)
            {
                i += 2;
                flag = 0;
            }
            else
            {
                // In this case its a 1 bit 
                i++;
                flag = 1;
            }
        }
        
        // if the flag is 1 then its true 
        if (flag)
            return true;
        
        // else its false
        return false;
    }



int main()
{
	vector<int> bits {1, 1, 1, 0};

	cout << "The result is one-bit character " << boolalpha << isOneBitCharacter(bits) << endl;
	
	return 0;
}
