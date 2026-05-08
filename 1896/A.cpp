#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int test;
    int permutationSize;

    cin >> test;
    while(test--)
    {
        cin >> permutationSize;
        vector<int> temporal(permutationSize);
        for(auto &element : temporal) cin >> element;
        cout << (temporal[0] == 1 ? "YES" : "NO" ) << "\n";
    }
    return 0;
}