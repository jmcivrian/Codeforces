#include<iostream>

using namespace std;

int main()
{
    int tests, a, b;
    cin >> tests;

    while(tests--)
    {
        cin >> a >> b;
        cout << min(a, b) << ' ' << max(a, b) << "\n";
    }
    return 0;
}
