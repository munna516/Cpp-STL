#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for (int x : v)
        cout << x << " ";

    v.pop_back();
    v.pop_back();
    cout << endl;
    
    for (int x : v)
        cout << x << " ";

    return 0;
}