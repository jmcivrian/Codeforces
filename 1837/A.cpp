#include<iostream>

using namespace std;

void CalculateJumps(int &target, int &nondivisible)
{
	if(target % nondivisible)
		cout << "1\n" << target;
	else 
		cout << "2\n" << target+1 << " -1";
	cout << "\n";
}

int main()
{
	int tests, target, nondivisible;
	cin >> tests;

	while(tests--)
	{
		cin >> target >> nondivisible;
		CalculateJumps(target, nondivisible);
	}
}