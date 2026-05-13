#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

void DivideAndConquer(vector<long> &data)
{
	vector<long> b, c;
	sort(data.begin(), data.end());
	long minimal = data[0];

	if(minimal == data[data.size()-1])
		cout << "-1\n";
	else{
		int it = 1;
		b.push_back(minimal);
		for(; it < data.size() && data[it] == minimal;++it) b.push_back(data[it]);
		for(; it < data.size();++it) c.push_back(data[it]);

		cout << b.size() << ' ' << c.size() << "\n";
		for(auto e : b) cout << e << ' ';
		cout << "\n";
		for(auto e : c) cout << e << ' ';
		cout << "\n";
	}
}

int main()
{
	int tests, _size;
	vector<long> data;
	cin >> tests;

	while(tests--)
	{
		cin >> _size;
		data =  vector<long>(_size);
		for(auto &element : data) cin >> element;
		DivideAndConquer(data);
	}
}