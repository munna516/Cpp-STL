#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s = {1, 2, 1, 3, 6, 4, 5, 2, 1}; // Declaration & Initialization
    for (auto u : s)                          // Printing Set element
        cout << u << " ";
    cout << endl;

    set<int>::iterator it; // Printing Set element using iterator
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    s.clear();                 // Clear set
    cout << s.empty() << endl; // check set is empty or not

    s.insert(12);
    s.insert(2); // O (log 2n)
    s.insert(12);
    s.insert(4);
    s.insert(3);

    cout << s.count(1) << endl; // This element is in this set or not
    cout << s.count(10) << endl;

    cout << *s.begin() << endl;   // first element
    cout << *(--s.end()) << endl; // last element
    cout << *s.rbegin() << endl;  // last element

    s.erase(0); // delete 0
    for (auto u : s)
        cout << u << " ";
    cout << endl;

    cout << s.size() << endl;
    s.erase(*s.begin()); // erase first element
    s.erase(*(--s.end()));
    cout << s.size() << endl;



    
    return 0;
}