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
    v.push_back(60);

    // Erace One Position

    v.erase(v.begin() + 1);
    for (int x : v)

        cout << x << " ";
    cout << endl;

    // Erace In a Range
    v.erase(v.begin() + 2, v.begin() + 4);
    for (int x : v)
        cout << x << " ";
    v.clear();
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout << endl;
    cout << v.size() << endl;

    // insert a number
    v.insert(v.begin() + 3, 10); // Starting Position , value
    for (int x : v)
        cout << x << " ";
    cout << endl;
    v.insert(v.begin() + 3, 10, 3); // Starting Position , times, value
    for (int x : v)
        cout << x << " ";

    return 0;
}