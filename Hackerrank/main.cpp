#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
	vector< vector<int> > arr  {{1, 1, 1, 0, 0, 0},
								{0, 1, 0, 0, 0, 0},
								{1, 1, 1, 0, 0, 0},
								{0, 0, 2, 4, 4, 0},
								{0, 0, 0, 2, 0, 0},
								{0, 0, 1, 2, 4, 0}};
							

	
	int high = INT_MIN;
	for(int row = 0; row < 4; row++)
	{
		for(int col = 0; col < 4; col++)
		{
			int s1 = arr[row][col];
			int s2 = arr[row][col+1];
			int s3 = arr[row][col+2];
			int s4 = arr[row+1][col+1];
			int s5 = arr[row+2][col];
			int s6 = arr[row+2][col+1];
			int s7 = arr[row+2][col+2];
			cout << s1 << " " << s2 << " " << s3 << "\n";
			cout << " " << s4 << "\n";
			cout << s5 << " "  << s6 << " "  << s7 << "\n";
			int total = s1 + s2 + s3 + s4 + s5 + s6 + s7;
			if (total > high)
			{
				high = total;
			}
		}
	}
	
	cout << "High: ";
	cout << high << "\n\n";

	
	
	return 0;
}
