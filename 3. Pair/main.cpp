#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Pair of two Integer
    pair<int, int> p;
    p.first = 10;
    p.second = 15;
    cout << p.first << " " << p.second << endl;

    // Pair of a String and a Vector
    pair<string, vector<int>> p1;
    p1.first = "Mehedi Hasan Munna";
    p1.second = {1, 5, 6, 3};
    cout << p1.first << endl;
    for (auto a : p1.second)
        cout << a << " ";
    cout << endl;

    // Directly Initialize a pair
    pair<int, int> p2;
    p2 = {1, 5};
    cout << p2.first << " " << p2.second << endl;
    pair<string, vector<int>> p3;
    p3 = {"Munna", {1, 8, 3, 4, 6}};
    cout << p3.first << " " << p3.second.size() << endl;

    // Max & Min pair
    pair<int, int> p4 = {1, 7};

    pair<int, int> p5 = max(p4, p2);
    cout << p5.first << " " << p5.second << endl;

    // Sorting Pair of Vector
    vector<pair<int, int>> v;
    v.push_back({3, 4});
    v.push_back({1, 8});
    v.push_back({5, 2});
    v.push_back({1, 5});
    v.push_back({3, 1});

    sort(v.begin(), v.end());
    for (auto u : v)
        cout << u.first << " " << u.second << endl;

    // Sort Array Of Pair
    pair<int, int> p6[] = {{6, 5}, {4, 5}, {1, 5}, {4, 7}, {2, 3}};
    sort(p6, p6 + 5);
    for (int i = 0; i < 5; i++)
        cout << p6[i].first << " " << p6[i].second << endl;

    // Sorting Vector of Pair with two different Data type
    vector<pair<string, int>> v1;
    v1.push_back({"munna", 15});
    v1.push_back({"sharif", 18});
    v1.push_back({"munna", 15});
    v1.push_back({"mehedi", 14});
    v1.push_back({"munna", 13});
    v1.push_back({"momo", 11});
    v1.push_back({"momo", 11});
    v1.push_back({"sharif", 18});
    sort(v1.begin(), v1.end());
    for (auto b : v1)
        cout << b.first << " " << b.second << endl;

    // Finding Out the Unique value
    cout << "Finding The Unique Pair : " << endl;
    int sz = unique(v1.begin(), v1.end()) - v1.begin();
    for (int i = 0; i < sz; i++)
        cout << v1[i].first << " " << v1[i].second << endl;

    return 0;
}