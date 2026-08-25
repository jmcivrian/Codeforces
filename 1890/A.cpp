#include<iostream>
#include<map>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ABS(a, b) (a > b ? a - b : b - a)
using namespace std;

bool isPossible(const map<int, int> &bucket)
{
    if(bucket.size() == 1) return true;
    if(bucket.size() > 2) return false;
    //check if there is enough values to alternate ex: 2 3 2 3 => yes; 2 3 3 3 2 => no;
    return ABS(bucket.begin()->second, bucket.rbegin()->second) <= 1;
}

int main()
{
    FAST_IO
    int test, _size, temp;
    map<int, int> bucket;
    cin >> test;
    
    while(test--)
    {
        cin >> _size;
        bucket.clear();
        
        while(_size--)
        {
            cin >> temp;
            bucket[temp]++;
        }
        cout << (isPossible(bucket) ? "YES" : "NO") << '\n';
    }
    return 0;
}