#include<iostream>
#include<vector>
using namespace std;

long long getMinDiff(vector<long long> &values)
{
    long long minDiff = 1e9;
    for(int i = 1; i < values.size();++i)
        minDiff = min(values[i] - values[i-1], minDiff);
    return minDiff;
}

long long formatAswer(long long answer)
{
    return answer >= 0 ? (answer >> 1)+ 1 : 0;
}

int main()
{
    int test, _size;

    cin >> test;
    while(test--)
    {
        cin >> _size;
        vector<long long> testCase(_size);
        for(auto &element : testCase) cin >> element;
        cout << formatAswer(getMinDiff(testCase))  << "\n";
    }
    return 0;
}