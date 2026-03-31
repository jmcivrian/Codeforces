#include<iostream>
#include<vector>

using namespace std;

string solve()
{
    int size, removals, odds = 0;
    string input;
    vector<int> bucket(26, 0);

    cin >> size >> removals;
    cin >> input;

    for(char letter : input)
        bucket[letter-'a']++;
    
    for(int letter : bucket) if (letter & 1) ++odds;

    return (--odds <= removals) ? "YES" : "NO";     
}

int main()
{
    int tests;
    cin >> tests;
    while(tests--)
    {
        cout << solve() << '\n';
    }
    return 0;
}