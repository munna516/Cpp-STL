#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Declare a vector
    vector<int> v1;

    // 1. Initializing by pushing values one by one
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    // Specifying size and initializing all values
    int n = 7;
    vector<int> v2(n, 5); // creating a vector size n & all value is 5

    //  Initializing like arrays
    vector<int> v3 = {30, 20, 10, 60, 50, 40};

    //  Initializing From an Array
    int arr[] = {5, 7, 9, 11, 13, 15};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> v4(arr, arr + n1);

    //  Initializing from another vector
    vector<int> v5{v3.begin(), v3.end()};

    // Printing a specific index from a vector
    cout << v1.at(1) << endl;
    cout << v3.at(3) << endl;
    cout << v4[2] << endl;

    // Printing a Whole vector using index
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    // Printing Vector using Iterator
    vector<int>::iterator it;
    for (it = v4.begin(); it != v4.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Printing Vector Using For-Each Loop
    for (auto a : v2)
        cout << a << " ";
    cout << endl;

    //  Vector sort (increasing order)
    sort(v3.begin(), v3.end());
    for (auto b : v3)
        cout << b << " ";
    cout << endl;

    // Vector sort (Decreasing Order)
    sort(v3.rbegin(), v3.rend());
    for (auto c : v3)
        cout << c << " ";
    cout << endl;

    // Reverse A vector
    reverse(v4.begin(), v4.end());
    for (auto d : v4)
        cout << d << " ";
    cout << endl;

    // Size , Max_Size , Capacity  of vector
    cout << v4.size() << endl;
    cout << v1.capacity() << endl;
    cout << v4.max_size() << endl;

    // Vector Empty or Not
    vector<int> v6;
    if (v6.empty())
        cout << "Vector is Empty" << endl;
    else
        cout << "Vector Is Not Empty" << endl;

    // Front & Back value of A vector
    cout << v5.front() << endl;
    cout << v4.back() << endl;

    // Assign n time a value in Vector
    vector<int> v7;
    v7.assign(5, 200);
    for (auto f : v7)
        cout << f << " ";
    cout << endl;
    v7.assign(v7.begin(), v7.begin() + 3);
    for (auto f : v7)
        cout << f << " ";
    cout << endl;

    // Delete An Element from the Back
    cout << v7.size() << endl;
    v7.pop_back();
    v7.pop_back();
    cout << v7.size() << endl;

    // Insert in Vector
    vector<int> v8{1, 2, 3, 4, 5, 6, 7};
    v8.insert(v8.begin() + 3, 7); // Starting Position , value
    for (int x : v8)
        cout << x << " ";
    cout << endl;
    v8.insert(v8.begin() + 3, 5, 10); // Starting Position , times, value
    for (int x : v8)
        cout << x << " ";
    cout << endl;

    // Erase in Vector
    v8.erase(v8.begin() + 1);
    for (int x : v8)
        cout << x << " ";
    cout << endl;

    v8.erase(v8.begin() + 2, v8.begin() + 4); // Erase in a Range
    for (int x : v8)
        cout << x << " ";
    cout << endl;

    // Swapping Two Vector
    swap(v1, v2);
    for (int x : v1)
        cout << x << " ";
    cout << endl;
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    // Clear a Vector
    cout << v4.size() << endl;
    v4.clear();
    cout << v4.size() << endl;
    return 0;
}