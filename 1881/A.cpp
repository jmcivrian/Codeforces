#include<iostream>

using namespace std;

int minStepsSubstr()
{
	string blocks, target;
	int bsize, tsize, steps = 0;
	cin >> bsize >> tsize;
	cin >> blocks >> target;

	while(blocks.find(target) == string::npos && steps < 6)
	{
		++steps;
		blocks+=blocks;
	}
	return blocks.find(target) == string::npos ? -1 : steps;
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << minStepsSubstr() << "\n";
    }
    return 0;
}
