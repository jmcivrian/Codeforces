#include<iostream>

using namespace std;

void PrintRow(int lenght, int offset)
{
    for(int j = 0+offset; j < lenght+offset; ++j)
    {
        if(j & 1)
            cout << "..";
        else 
            cout << "##";
    }
    cout << '\n';
}

void PrintBoard(int side)
{
    for(int i = 0; i < side; ++i)
    {
        PrintRow(side, i&1);
        PrintRow(side, i&1);
    }
}

int main()
{
    int tests, side;
    cin >> tests;
    while(tests--)
    {
        cin >> side;
        PrintBoard(side);
    }
    return 0;
}