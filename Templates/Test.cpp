#include <bits/stdc++.h>
#include <array>
#include <vector>

using namespace std;

#define For(n) for (int i = 0; i < n; ++i)

void io()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
	io();

	int t;
	cin >> t;
	while (t--)
	{
		For(6)
		{
			cout << "b";
		}
	}
	array<int, 5> arr;
	arr.fill(2);
	cout << arr[2];
	std::vector<int> arr1;
	arr1.reserve(10);
	arr1.push_back(3);
	cout << arr1[0];
	return 0;
}