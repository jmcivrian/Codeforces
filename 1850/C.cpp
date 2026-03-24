#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        vector<string> paper(8);
        string answer = "";
        for(auto &line : paper)
        {
            cin >> line;
            for(auto letter : line)
                if(letter != '.') answer+=letter;
        }
        cout << answer << "\n";
    }
    return 0;
}
