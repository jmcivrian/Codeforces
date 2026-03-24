#include<iostream>

using namespace std;

int main()
{
    int tests, n;
    cin >> tests;

    while(tests--)
    {
        cin >> n;
        if(n == 3) cout << n << "\n";
        else cout << "2\n";
    }
    return 0;
}
