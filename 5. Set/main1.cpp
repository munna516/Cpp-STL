#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string, greater<string>> s;
    s.insert("munna");
    s.insert("momo");
    s.insert("sharif");
    s.insert("anis");
    s.insert("anis");
    s.insert("momo");
    cout << s.size() << endl;
    for (auto u : s)
        cout << u << " ";
    cout << endl;

    s.erase("munna");
    for (auto u : s)
        cout << u << " ";

    return 0;
}