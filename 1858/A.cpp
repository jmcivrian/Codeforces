#include<iostream>

using namespace std;

int main()
{
    int tests, a, b, c, turn;
    cin >> tests;

    while(tests--)
    {
        cin >> a >> b >> c;

        //odd => player b plays first, then player b can only win if has more turns
        turn = c & 1;

        cout << ( (turn ? a >= b : a > b) ? "First" : "Second") << "\n";
    }
    return 0;
}
