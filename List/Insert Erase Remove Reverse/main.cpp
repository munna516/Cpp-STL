#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(5);
    li.push_back(10);
    li.push_back(15);
    li.push_back(20);

    // Insert
    for (auto x : li)
        cout << x << " ";
    cout << endl;

    list<int>::iterator it;
    it = li.begin();
    advance(it, 3);      // Pointing 3rd index
    li.insert(it, 100);  // Set Value 100 at index 3
    li.insert(it, 5, 6); // pointing index,times,value
    for (auto x : li)
        cout << x << " ";
    cout << endl;

    // Erase
    list<int> li{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14};
    list<int>::iterator it, it2;
    it = li.begin();
    it2 = li.begin();
    advance(it2, 10);
    li.erase(it, it2);
    for (auto x : li)
    {
        cout << x << " ";
    }

    // Remove
 


    return 0;
}