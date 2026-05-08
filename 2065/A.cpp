#include<iostream>
using namespace std;

int main()
{
    int test;
    string word;

    cin >> test;
    while(test--)
    {
        cin >> word;
        cout << word.substr(0, word.size()-2) << "i\n";
    }
    return 0;
}