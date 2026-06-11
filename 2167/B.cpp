#include<iostream>
#include<algorithm>
using namespace std;

bool existName()
{
	int _size;
	cin >> _size;

	string candidate, target;

	cin >> candidate >> target;
	sort(candidate.begin(), candidate.end());
	sort(target.begin(), target.end());

	return candidate == target;
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << (existName() ? "YES" : "NO") << "\n";
    }
    return 0;
}
