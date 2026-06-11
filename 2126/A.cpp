#include<iostream>
#include<algorithm>
using namespace std;

char searchSmallestDigit()
{
	string list;

	cin >> list;
	sort(list.begin(), list.end());

	return list[0];
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << searchSmallestDigit() << "\n";
    }
    return 0;
}
