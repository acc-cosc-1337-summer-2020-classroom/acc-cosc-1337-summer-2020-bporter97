#include "vec.h"
#include<vector>

using std::vector;
using std::string;
using 

int main() 
{
	vector<int> num; //empty vector
	vector<int> num1(5);

	for(auto n: num1)
	{
		std::cout<<n<<"\n";
	}

	vector<char> char(5, 'z');

	for(auto c: char1)
	{
		std::cout<<c<<"\n";
	}

	vector<double> dubs{1.5, 2.5};
	vector<std::string> names {"joe", "john", "mary"}:
	names.push_back("Jill");
	for(auto n: names)
	{
		std::cout<<n<<"\n";
	}

	return 0;
}