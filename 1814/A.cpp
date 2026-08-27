#include<iostream>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool canPay(long long int target, long long int candidate)
{
    return !(target & 1) || ((target & 1) && (candidate & 1));
}

int main()
{
    FAST_IO
    long long int test, temp, target;
    cin >> test;
    
    while(test--)
    {
        cin >> target >> temp;
        cout << (canPay(target, temp) ? "YES" : "NO") << '\n';
    }
    return 0;
}