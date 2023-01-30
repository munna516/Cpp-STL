#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Swapping two Vector
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {10, 20, 30, 40};
    swap(v1, v2);
    for (int x : v1)
        cout << x << " ";
    cout << endl;
    for (int x : v2)
        cout << x << " ";

    // Sort
    vector<int> v3 = {1, 9, 5, 8, 2, 4, 7, 3};
    sort(v3.begin(), v3.end());
    cout << endl;
    for (int x : v3)
        cout << x << " ";

    // Reverse

    reverse(v3.begin(), v3.end());
    cout << endl;
    for (int x : v3)
        cout << x << " ";

    return 0;
}