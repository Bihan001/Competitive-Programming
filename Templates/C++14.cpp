#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	// Value initialization without '='
	int arr[5] {2, 4, 5};

	// Array using STL and modern initialization
	// array<int, 5> {2,4,5};

	for (auto const& i : arr) {
		cout << i << " ";
	}

	cout << endl;

	string s = "abcdefgh";

	for (auto const& c : s) {
		cout << c << " ";
	}

	return 0;
}