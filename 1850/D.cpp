#include<iostream>
#include<vector>
#include<algorithm>

#define abs(a, b) ((a >= b) ? a - b : b - a)

using namespace std;

int getBestSubArraySize(vector<int> &values, int &difference)
{
	vector<int> best(values.size(), 0);
	best[0] = 1;
	for(int i = 1; i < values.size(); ++i)
	{
		if(abs(values[i], values[i-1]) > difference)
			best[i] = 1;
		else
			best[i] = best[i-1] + 1;
	}

	int longest = 0;
	for(auto candidate : best) longest = max(longest, candidate);
	return longest; 
}

int minimumSet()
{
	int size, difference;
	cin >> size >> difference;
	vector<int> values(size, 0);

	for(auto &value : values) cin >> value;

	sort(values.begin(), values.end());

	return values.size() - getBestSubArraySize(values, difference);
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << minimumSet() << "\n";
    }
    return 0;
}
