#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int, int>> s;
    s.insert({2, 5});
    s.insert({1, 5});
    s.insert({2, 3});
    s.insert({2, 3});
    s.insert({1, 5});
    s.insert({5, 5});
    s.insert({5, 7});
    s.insert({3, 5});
    cout << s.size() << endl;
    for (auto u : s)
        cout << u.first << " " << u.second << endl;
    cout << endl;
    return 0;
}