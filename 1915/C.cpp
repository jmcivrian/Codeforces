#include<iostream>
#include<math.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    FAST_IO
    long long int test, _size, temp, total;
    cin >> test;
    
    while(test--)
    {
        cin >> _size;
        total = 0;
        while(_size--)
        {
            cin >> temp;
            total += temp;
        }
        temp = static_cast<long> (sqrt(total));
        cout << (temp * temp == total ? "YES" : "NO") << '\n';
    }
    return 0;
}