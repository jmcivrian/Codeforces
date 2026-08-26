#include<iostream>
#include<vector>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int getdiff(const vector<int> &list)
{
    int answer = 0;
    for(int value : list)
        answer += value;
    return -answer;
}

int main()
{
    FAST_IO
    int test, _size;
    cin >> test;
    
    while(test--)
    {
        cin >> _size;
        vector<int> list(_size-1);
        for(int &e : list) cin >> e;

        cout << getdiff(list) << '\n';
    }
    return 0;
}