#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>

using namespace std;


int main()
{

//	Create a list, seqlist, of m empty sequences, where each sequence is indexed from 0 to n-1.
// The elements within each of the  sequences also use -indexing.
//			Create an integer, lastAns, and initialize it to 0.
//			The  types of queries that can be performed on your list of sequences (seqList) are described below:
//	Query: 1 x y
//	Find the sequence, seq, at index (x ^ lastAns) % N in seqList.
//			Append integer y to sequence seq.
//			Query: 2 x y
//	Find the sequence, seq, at index  in .
//			Find the value of element  in  (where  is the size of ) and assign it to .
//			Print the new value of  on a new line

//	2 5
//	1 0 5
//	1 1 7
//	1 0 3
//	2 1 0
//	2 1 1

	int N, Q, x, y, queryType;
	u_long lastAns = 0;

	cin >> N;
	cin >> Q;

	vector<vector<int>> seqList(N, vector<int>());

	for (int i = 0; i < Q; i++)
	{
		cin >> queryType;
		cin >> x;
		cin >> y;

		int seq = (x ^ lastAns) % N;	//get the sequence number

		if (queryType == 1)		//append integer y to seq
		{
			seqList[seq].push_back(y);
		}

		if (queryType == 2)		//find the value of y%size in seq and assign to last ans. print las ans
		{
			int index =  y % seqList[seq].size();
			lastAns = seqList[seq][index];
			cout << lastAns << endl;
		}
	}
	return 0;
}
