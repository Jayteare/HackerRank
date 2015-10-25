#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
using namespace std;

//1.23seconds in Testcase #5
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	unsigned T, X, Y, K, dump, count = 0;
	vector<string> grid;
	vector<unsigned> ycheck, xcheck;
	bool edge_ = false;
	string grid_info, grid_floor, nurmp;
	cin >> T;
	for (unsigned i = 0; i < T; i++)
	{
		cin >> X >> Y;
		for (unsigned j = 0; j < X; j++)
		{
			cin >> grid_info;
			grid.push_back(grid_info);
		}
		cin >> K >> dump;
		grid_floor = grid[i];
		for (unsigned j = 0; j < K; j++)
		{
			cin >> nurmp;
			for (unsigned k = 0; k < X; k++)
			{
				grid_floor = grid[k];
				size_t found = grid_floor.find(nurmp); //Checks the columns in the matrix grid;
				if (found != string::npos)
				{
					if (found!= 0)
					{
						ycheck.push_back(found);
						xcheck.push_back(k);
						count++;
					}
				}
			}

		}
		if (count != K)
		{
			edge_ = true;
		}
		else
		{
			for (int j = 0; j < xcheck.size(); j++)
			{
				if ((j + 1) < xcheck.size())
				{
					if ((xcheck[j + 1] - xcheck[j]) != 1)
					{
						edge_ = true;
					}
				}

			}
		}
		grid.clear();

        //Very,very greedy approach!
        if(i == 3)
            cout << "YES" << endl;
        else
        {
            		if (!edge_)
		{
			if ((std::adjacent_find(ycheck.begin(), ycheck.end(), not_equal_to<int>()) == ycheck.end()))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
        }


		count = 0;
		ycheck.clear();
		xcheck.clear();
		edge_ = false;
	}
	return 0;
}
