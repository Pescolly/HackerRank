#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>

using namespace std;


int main() //sparse array
{
//	There are N strings. Each string's length is no more than 20 characters.
// There are also Q queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.
//	The first line contains N, the number of strings.
//	The next N lines each contain a string.
//	The N + 2nd line contains Q, the number of queries.
//	The following Q lines each contain a query string.

//	sample input
//	4
//	aba
//	baba
//	aba
//	xzxb
//	3
//	aba
//	xzxb
//	ab

//	Sample Output
//	2
//	1
//	0

	int N;
	cin >> N;

	string arr[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int Q;
	cin >> Q;
	string subString;
	for (int i = 0; i < Q; i++)
	{
		cin >> subString;
		int count = 0;
		for (int j = 0; j < N; j++)
		{
			if (arr[j] == subString)
			{
				count++;
			}
		}
		cout << count << endl;
	}


	return 0;
}
