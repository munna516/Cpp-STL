#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    // Push Back
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    for (auto t : li)
    {
        cout << t << " ";
    }
    cout << endl;

    // Push Front
    li.push_front(5);
    li.push_front(6);
    for (auto t : li)
    {
        cout << t << " ";
    }
    cout << endl;

    // Pop Back
    li.pop_back();
    li.pop_back();
    for (auto t : li)
    {
        cout << t << " ";
    }
    cout << endl;

    // Pop Front
    li.pop_front();
    li.pop_front();
    for (auto t : li)
    {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}