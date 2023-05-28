#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, int> p;
    // p = {2, 3};
    // cout << p.first << " " << p.second << endl;
    // p = make_pair(5, 6);
    // cout << p.first << " " << p.second << endl;
    // p.first++;
    // p.second--;
    // cout << p.first << " " << p.second << endl;

    pair<string, vector<int>> p1;
    p1 = {"Munna", {1, 6, 7, 9}};
    cout << p1.first << " " << p1.second.size() << endl;
    return 0;
}