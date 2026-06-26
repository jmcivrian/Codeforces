#include<iostream>
#include<vector>
#include<algorithm>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ABS(x, y) (x > y ? x - y : y - x)  
#define DBGOUT(x, y) cout << "\n<" << x << " -> " << y << ">";
using namespace std;

int searchClosestValue(vector<int> &candidate, int &target)
{
    int best = 11,evens = 0,  actual, rem;
    for(int i = 0; i < candidate.size();++i)
    {
        rem = candidate[i] % target;
        actual = !rem ? 0 : target - rem;
        if(!(candidate[i] & 1)) evens++; 
        best = min(best, actual);
    }
    if(target == 4)
    {
        if(candidate.size() > 1)
        best = min(best, max(0, 2 - evens));
    }
    return best;
}

int main()
{
    FAST_IO
    int test, _size, target;
    cin >> test;
    vector<int> values;
    
    while(test--)
    {
        cin >> _size >> target;
        values = vector(_size, 0);
        for(auto &e : values) cin >> e;
        cout << searchClosestValue(values, target) << '\n';
    }
    return 0;
}