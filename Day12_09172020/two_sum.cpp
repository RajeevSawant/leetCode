#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> twoSums (vector<int>& nums , int target)
{
        // create vector to store the results
        vector<int> result;
        
        // create an unordered_map , one to store the value of the arr and other to store the position 
        unordered_map<int , int> L;
        
        for (int i = 0; i < nums.size(); i++)
        {
            // put the value of other value to search in vector in numx
            int numx = target - nums[i];
            
            // find the value of numx in map L , if found before we reach the end of the map
            if (L.find(numx) != L.end())
            {
                // save the position of numx that was found 
                result.push_back(L[numx]);
                
                //save the position of current value used to find numx
                result.push_back(i);
            }
            
            // save the position of nums[i] in the map, so the key is nums[i] and value is i which is position of nums[i]
            L[nums[i]] = i;
            
        }
        
        
        return result;
}



int main()
{
	int n = 0, temp = 0, target = 0;
	vector<int> sums, results;

	cout << "Enter the number of parameters\n";
	cin >> n;

	cout << "Enter the values\n";
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sums.push_back(temp);
	}

	cout << "Enter the target\n";
	cin >> target;

	results = twoSums(sums, target);

	cout << "The positions are ";
	for (int j = 0; j < results.size(); j++)
	{
		cout << results[j] << " ";
	}
	cout << "\n";

	return 0;
}


