#include<iostream>
#include<vector>

using namespace std;

int GetFarthestDistance(vector<int> &gasStations, int &destination)
{
    int checkPoint = 0, best = 0;
    for(int gasStation : gasStations)
    {
        best = max(gasStation - checkPoint, best);

        checkPoint = gasStation;
    }

    best = max((destination - *gasStations.rbegin()) << 1, best);

    return best;
}


int main()
{
    int tests, amountGasStations, destination;
    cin >> tests;

    while(tests--)
    {
        cin >> amountGasStations >> destination;
        vector<int> gasStations(amountGasStations);
        for(int &gasStation : gasStations) cin >> gasStation;
        cout << GetFarthestDistance(gasStations, destination) << "\n";
    }
    return 0;
}
