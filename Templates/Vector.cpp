#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;

	v.reserve(1000);

	for (int i = 0; i < 32; ++i)
	{
		v.push_back(i);
		cout << "Value: " << v.at(i) << " Size: " << v.size() << " Capacity: " << v.capacity() << endl;
	}

	std::vector<int> v1;

	for (int i = 0; i < 50; ++i)
	{
		v1.push_back(i);
		cout << "Value: " << v1.at(i) << " Size: " << v1.size() << " Capacity: " << v1.capacity() << endl;
	}


	return 0;
}
