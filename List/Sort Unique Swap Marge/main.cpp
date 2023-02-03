#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li{1, 9, 2, 6, 4, 3, 4, 6, 8, 5, 7};
    // Sort
    li.sort(); // Sorting the list
    for (int x : li)
        cout << x << " ";
    cout << endl;

    // unique
    li.unique(); // it delets all the
    for (int x : li)
        cout << x << " ";

    // Swaping 2 list
    list<int> li2 = {1, 3, 5, 7, 9};
    li.swap(li2);
    for (int x : li)
        cout << x << " ";
    cout << endl;

    for (int x : li2)
        cout << x << " ";
    cout << endl;

    // Marge
    li.merge(li2);
    for (int x : li)
        cout << x << " ";
    cout << endl;

    return 0;
}