#include<iostream>
#include<vector>
#include<queue>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

struct customCompare{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b)
    {
        return (a.first != b.first) ? a.first < b.first : a.second > b.second;
    }
};

void printOrderMonstersDie(priority_queue<pair<int, int>, vector<pair<int, int>>, customCompare> &healthTimeLine)
{
    while(!healthTimeLine.empty())
    {
        cout << healthTimeLine.top().second << ' ';
        healthTimeLine.pop();
    }
        cout << '\n';
}

int main()
{
    FAST_IO
    int test, n, attack, health;
    priority_queue<pair<int, int>, vector<pair<int, int>>, customCompare> helper;
    
    cin >> test;
    while(test--)
    {
        cin >> n >> attack;
        for(int i = 0; i < n; ++i)
        {
            cin >> health;
            health%=attack;
            helper.push(pair<int, int>(health ? health : attack, i+1));
        }
        printOrderMonstersDie(helper);
    }
    return 0;
}