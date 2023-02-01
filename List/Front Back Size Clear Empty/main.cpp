#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << l.size() << endl;

    l.clear();

    if (l.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    return 0;
}