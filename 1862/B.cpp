#include<iostream>
#include<vector>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void checkIncrease(vector<int> &list)
{
    vector<int> newList(1, list[0]);
    int valueToAdd = 0;
    for(int i = 1; i < list.size();++i)
    {
        valueToAdd = list[i];
        if(list[i-1] > list[i])
        {
            valueToAdd--;
            if(!valueToAdd) valueToAdd = 1;
            newList.push_back(valueToAdd);
        }
        newList.push_back(list[i]);
    }
    list = move(newList);
}

int main()
{
    FAST_IO
    int test, _size;
    cin >> test;
    
    while(test--)
    {
        cin >> _size;
        vector<int> list(_size);
        for(int &e : list) cin >> e;
        
        checkIncrease(list);
        
        cout << list.size() << '\n';
        for(int e : list) cout << e << ' ';
        cout << '\n';
    }
    return 0;
}