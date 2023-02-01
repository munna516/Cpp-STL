#include <bits/stdc++.h>
using namespace std;
int main()
{
    // List Declaration
    list<int> li;

    // List Initialization

    // 1. One by one Initialization
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    for (auto x : li)
        cout << x << " ";
    cout << endl;
    

    // 2. Specifying list size & initialize all value
    int n = 5;
    list<int> l1(n, 10);
    for (auto x : l1)
        cout << x << " ";
    cout << endl;


    // 3. Initializing List like an array
    list<int> l3{1, 2, 3, 4, 5};
    for (auto x : l3)
        cout << x << " ";
    cout << endl;


    // 4. Initialize From an array
    int ar[]{9, 8, 7, 6, 5};
    int n1 = sizeof(ar) / sizeof(ar[0]);
    list<int> l4(ar, ar + n); // passing array,array size
    for (auto x : l4)
        cout << x << " ";
    cout << endl;


    // 5. Initializing List From Vector
    vector<int> vec{3, 4, 5, 6, 7};
    list<int> l5(vec.begin(), vec.end());
    for (auto x : l5)
        cout << x << " ";
    cout << endl;

    return 0;
}
