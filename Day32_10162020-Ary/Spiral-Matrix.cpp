#include <iostream>
#include <vector>
using namespace std;



vector<int> spiralOrder(vector<vector<int>>& matrix)
{
	
        vector<vector<int> > dirs{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	vector<int> res;

	int nr = matrix.size();  if(nr == 0) return res;
	int nc = matrix[0].size();  if(nc == 0) return res;

	vector<int> nSteps{nc, nr-1};

	int iDir = 0;
	int ir = 0, ic = -1; 

	while(nSteps[iDir % 2])
	{
		for (int i = 0; i < nSteps[iDir % 2]; i++)
		{
		    ir += dirs[iDir][0]; ic += dirs[iDir][1];	
		    res.push_back(matrix[ir][ic]);
		}

		nSteps[iDir % 2]--;
		iDir = (iDir + 1) % 4;
	}

	return res;
}



int main()
{
	
	vector<vector <int> >inp  {{1, 2, 3},
			           {4, 5, 6},
	                           {7, 8, 9}};



	vector<int> res;

	res = spiralOrder(inp);

	cout << "[ ";
	for(int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "]\n";

	return 0;
}

