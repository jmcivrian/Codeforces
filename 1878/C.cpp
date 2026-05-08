#include<iostream>

using namespace std;

bool ExistSumSet(long long &n, long long &range, long long &target)
{
    long long minimumlSum = (range*(range+1))>>1;
    long long maximumSum = (range*n)-((range*(range-1))>>1);

    return minimumlSum <= target && target <= maximumSum;
}

int main()
{
    int test;
    long long n, range, target;

    cin >> test;
    while(test--)
    {
        cin >> n >> range >> target;
        cout << (ExistSumSet(n, range, target) ? "YES" : "NO") << "\n";
    }

    return 0;
}