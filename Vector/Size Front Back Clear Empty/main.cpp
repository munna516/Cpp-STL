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
    // Size
    cout << v.size() << endl;

    // Front
    cout << v.front() << endl;

    // Back
    cout << v.back() << endl;

    // Clear
    v.clear();
    cout << v.size() << endl;

    // Empty
    if (v.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    return 0;
}