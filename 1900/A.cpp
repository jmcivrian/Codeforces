#include<iostream>
#include<map>

using namespace std;

int checkMinimalsteps(string &input)
{
	map<int, int> gaps;
	int distance = 0, answer = 0;
	input += '$';

	for(char gap : input)
	{
		if(gap == '.') ++distance;
		else if(distance){
			gaps[distance]++;
			distance = 0;
		}
	}

	if(gaps.empty()) answer = 0;
	else if( gaps.rbegin()->first <= 2)
	{
		for(auto gap : gaps)
			answer += gap.first * gap.second;
	}
	else answer = 2;
	
	return answer;
}

int main()
{
    int tests, trash;
	string test;
    cin >> tests;

    while(tests--)
    {
        cin >> trash;
		cin >> test;
		cout << checkMinimalsteps(test) << '\n';
    }
    return 0;
}