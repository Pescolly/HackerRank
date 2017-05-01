#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>

using namespace std;


int main() //perform left rotation on array of len size;
{
	int size, rots;

	cin >> size;
	cin >> rots;

	int arr[size];
	int a2[size];

	for (int i = 0; i < size; i++)
	{ cin >> arr[i]; }

	memcpy(a2, &arr[rots], (sizeof(int) * (size-rots)));
	memcpy(&a2[size-rots], arr, (sizeof(int) * rots));

	for (int i = 0; i < size; i++)
	{ cout << a2[i] << " "; }

	return 0;
}
