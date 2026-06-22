 #include<iostream>
#include<vector>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_WORDS 10
using namespace std;

int getBest()
{
    int total, words, quality;
    pair<int, int> best = {0, -1};

    cin >> total;
    for(int i = 1; i <= total;++i)
    {
        cin >> words >> quality;
        if(words > MAX_WORDS) continue;
        if(quality > best.first)
        {
            best.first = quality;
            best.second = i;
        }
    }
    return best.second;
}

int main()
{
    FAST_IO
    int test, _size;
    cin >> test;
    
    while(test--)
    {
        cout << getBest() << '\n';
    }
    return 0;
}