#include<iostream>
#include<vector>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ABS(x, y) (x > y ? x - y : y - x)  

using namespace std;

int getMinimalEffort(const vector<int> &list)
{
    int minEffort = 1e5;
    for(int value : list)
    {
        if(ABS(value, 0) < minEffort)
            minEffort = value < 0 ? -value : value;
    }
    return minEffort;
}

int main()
{
    FAST_IO
    int _size;
    cin >> _size;
    vector<int> list(_size);
    for(int &e : list) cin >> e;

    cout << getMinimalEffort(list);
    return 0;
}