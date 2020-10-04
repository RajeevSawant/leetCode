#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height)
{
        // Get the lo and hi of the bars 
        int lo = 0, hi = height.size() - 1, maxvalue = INT_MIN;
        
        while (lo < hi)
        {
            // you can hi , lo which are the x-axis and then have height[hi], height[lo] which are the Y-axis 
            maxvalue = max(maxvalue , (hi - lo)*min(height[hi], height[lo]));
            
            // if the height of lo position is less than of hi position, then move lo forward 
            if (height[lo] < height[hi])
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
        
        return maxvalue;
}


int main()
{
	vector<int> result;
	int n = 0, temp = 0, results = 0;

	cout << "Enter the number of parameters\n";
	cin >> n;

	cout << "Enter the values\n";
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		result.push_back(temp);
	}
	
	results = maxArea(result);

	cout << "The max Area of water in container is  " << results << endl;

	return 0;
}

