#include <iostream>
#include <string>
#include <vector>

using namespace std;
using  std::string;

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9};
	for (auto i : v)
	{
		i *= i;
	}
	for (auto i : v)
	{
		cout << i << " "<<endl;
	}
	cout << v[8];
	return 0;
}
