#include<iostream>

using namespace std;

int minSteps(string &input)
{
    int ones = 0, zeros = 0;

    for(int value : input)
    {
        value -='0'; 
        if(value) 
            ++ones;
        else
            ++zeros;
    }
    
    for(int i = 0; i < input.size(); ++i)
    {
        int value = input[i] - '0';
        if(value)
        {
            if(zeros--) continue;
            return input.size() - i;
        }
        else
        {
            if(ones--) continue;
            return input.size() - i;
        }
    }
    return 0; 
}

int main()
{
    int test;
    string input;

    cin >> test;
    while(test--)
    {
        cin >> input;
        cout << minSteps(input) << '\n';
    }
    return 0;
}