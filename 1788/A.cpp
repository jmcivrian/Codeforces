#include<iostream>
#include<vector>
using namespace std;

int FindHalf(vector<int> &values, int &total2s)
{
	if(total2s & 1) return -1;
	else if(!total2s) return 1;

	int remainingHalf2s = total2s>>1;
	for(int i = 0; i < values.size(); ++i) 
	{
		if(!(values[i] & 1)) 
		{
			--remainingHalf2s;
			if(!remainingHalf2s) return i+1;
		}
	}
	return -1;
}

int main()
{
	int tests, _size, total2s;
	cin >> tests;
	vector<int> values;
	
	while(tests--)
	{
		cin >> _size;
		total2s = 0;
		values = vector<int>(_size);
		for(auto &e : values) 
		{
			cin >> e;
			if(!(e&1)) ++total2s;
		}
		cout << FindHalf(values, total2s) << "\n";
	}
}