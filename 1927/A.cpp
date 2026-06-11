#include<iostream>
#include<algorithm>
using namespace std;

#define BlackCell 'B'

int distanceFirstAndLastB()
{
	int _size;
	cin >> _size;

	string path;
	cin >> path;

	pair<int, int> range;
	range.first = path.find_first_of(BlackCell);
	range.second = path.find_last_of(BlackCell);

	return range.second - range.first + 1;
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << distanceFirstAndLastB() << "\n";
    }
    return 0;
}
