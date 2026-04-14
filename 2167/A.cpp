#include<iostream>
#include<map>
using namespace std;

bool isBox()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	map<int, int> sides;
	sides[a]++;
	sides[b]++;
	sides[c]++;
	sides[d]++;

	return sides[a] == 4;
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << (isBox() ? "YES" : "NO") << "\n";
    }
    return 0;
}
