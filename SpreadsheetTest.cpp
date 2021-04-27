

#include <iostream>
#include <iostream>
#include "Spreadsheet.h"
#include <vector>

using namespace std;

Spreadsheet createObject()
{
	return Spreadsheet{ 3, 2 };
}
int main()
{
	std::vector<Spreadsheet> vec;
	for (size_t i{ 0 }; i < 2; ++i) {
		cout << "Iteration " << i << endl;
		vec.push_back(Spreadsheet{ 100, 100 });
		cout << endl;
	}
	Spreadsheet s{ 2, 3 };
	s = createObject();
	Spreadsheet s2{ 5, 6 };
	s2 = s;
}