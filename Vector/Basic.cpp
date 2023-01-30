#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  Vector Declarization
    vector<int> vec; // empty vector

    //  Vector Initialization
    vec.push_back(7);
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(1);

    //  Priting Vector
    cout << vec[0] << " " << vec[3] << endl; // Like An Array

    cout << vec.at(0) << " " << vec.at(3) << endl;

    for (int x : vec) // Range Base For Loop
    {
        cout << x << " ";
    }
    cout << endl;

    //  Size of a vector
    cout << vec.size() << endl;

    //  Printing 1st & Last value of a vector
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    // Clear Full vector
    vec.clear();

    // Check Vector is Empty or Not
    cout << vec.empty() << endl;

    vec.push_back(7);
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(19);

    //  Delete Last element From Vector
    vec.pop_back();
    for (int x : vec)
        cout << x << " ";
    cout << endl;

    // Delete an specific Position
    vec.erase(vec.begin() + 2);
    for (int x : vec)
        cout << x << " ";

    // Delete In a Range
    vec.erase(vec.begin() + 2, vec.begin() + 4);

    for (int x : vec)
        cout << x << " ";
    cout << endl;
    return 0;
}