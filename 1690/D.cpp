#include<iostream>
#include<vector>
#include<algorithm>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ABS(x, y) (x > y ? x - y : y - x)  
#define DBGOUT(x, y) cout << "\n<" << x << " -> " << y << ">";
using namespace std;

int searchMinimalStripe(string &input, int &target)
{
    int black = 0, white = 0, minimalWhite;
    for(int i = 0; i < target;++i)
    {
        if(input[i] == 'W') ++white;
        else ++black;
    }
    minimalWhite = white;
    for(int i = 1; i <= input.size() - target;++i)
    {
        if(input[i-1] == 'W') --white;
        else --black;
        if(input[i+target-1] == 'W') ++white;
        else ++black;    
        minimalWhite = min(minimalWhite, white);
        if(!minimalWhite) break;
    }
    return minimalWhite;
}

int main()
{
    FAST_IO
    int test, _size, target;
    string input;
    cin >> test;
    
    while(test--)
    {
        cin >> _size >> target;
        cin >> input;
        cout << searchMinimalStripe(input, target) << '\n';
    }
    return 0;
}