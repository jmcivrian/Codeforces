 #include<iostream>
#include<algorithm>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define _X first
#define _Y second

using namespace std;

int getArea()
{
    pair<int, int> coords;
    pair<int, int> distX = {1e4, -1e4}, distY = {1e4, -1e4};
    for(int i = 0; i <= 3;++i)
    {
        cin >> coords._X >> coords._Y;
        distX.first = min(int(coords._X), distX.first);
        distX.second = max(coords._X, distX.second);
        
        distY.first = min(coords._Y, distY.first);
        distY.second = max(coords._Y, distY.second);
    }

    return (distX.second - distX.first) * (distY.second - distY.first);
}

int main()
{
    FAST_IO
    int test, _size;
    cin >> test;
    
    while(test--)
    {
        cout << getArea() << '\n';
    }
    return 0;
}