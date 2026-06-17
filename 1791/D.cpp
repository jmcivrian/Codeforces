#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int getMaxSize(string candidate)
{
    int best = 1;
    map<char, int> setL, setR;
    
    for(char letter : candidate)
        setR[letter]++;

    candidate+="#";
    for(int i = 1; i < candidate.size(); ++i)
    {
        char actual = candidate[i-1];
        if(setR[actual]) 
        {
            setR[actual]--;
            if(!setR[actual]) setR.erase(actual);
        }
        setL[actual]++;
        best = max(best, int(setL.size() + setR.size()));
    }
    return best;
}

int main()
{
    FAST_IO
    int test, n;
    string input;
    
    cin >> test;
    while(test--)
    {
        cin >> n >> input;
        cout << getMaxSize(input) << '\n';
    }
    return 0;
}