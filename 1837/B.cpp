#include<iostream>

using namespace std;

int countSequence(const string &sequence)
{
    int minimumSequence = 1, sameSequence = 1;
    for(int it = 1; it < sequence.size();++it)
    {
        if(sequence[it] == sequence[it-1]) ++sameSequence;
        else 
        {
            minimumSequence = max(minimumSequence, sameSequence);
            sameSequence = 1;
        }
    }
    return minimumSequence+1;
}

int main()
{
    int tests, _size;
    string sequence;
    cin >> tests;
    while(tests--)
    {
        cin >> _size;
        cin >> sequence;
        sequence+='#';
        cout << countSequence(sequence) << '\n';
    }
    return 0;
}