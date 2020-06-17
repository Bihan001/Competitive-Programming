#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	map<string, int> pairs;

	pairs["bihan"] = 19;
	pairs["ankur"] = 18;
	pairs["niharika"] = 20;
	pairs["naruto"] = 30;

	for (auto it = pairs.begin(); it != pairs.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// for c++ 14
	for (auto const& i : pairs) {
		cout << i.first << ": " << i.second << endl;
	}

	return 0;
}