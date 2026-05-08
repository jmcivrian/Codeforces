#include<iostream>

using namespace std;

int main()
{
    int test;
    string a, b, c;

    cin >> test;
    while(test--)
    {
        cin >> a >> b >> c;
        cout << a[0] << b[0] << c[0] << "\n";
    }
    return 0;
}