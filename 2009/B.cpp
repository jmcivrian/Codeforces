#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    FAST_IO
    int test, _size;
    string input;
    cin >> test;

    stack<string> container;
    while(test--)
    {
        cin >> _size;
        while(_size--)
        {
            cin >> input;
            container.push(input);
        }
        while(!container.empty())
        {
            input = container.top();
            container.pop();
            cout << (input.find_first_of('#') + 1) << ' ';
        }
        cout << '\n';
    }

    return 0;
}