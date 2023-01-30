#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Initializing by pushing values one by one
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    cout << v1.at(2) << endl;

    // 2. Specifying size and initializing all values
    int n = 3;
    vector<int> v2(n, 5); // creating a vector size n & all value is 5
    cout << v2.at(2) << v2.at(0) << " " << endl;

    // 3. Initializing like arrays
    vector<int> v3 = {10, 20, 30};
    cout << v3[0] << endl;

    // 4. Initializing From an Array
    int arr[] = {10, 20, 30};
    int n1 = sizeof(arr) / sizeof(arr[0]);

    vector<int> v4(arr, arr + n1);

    for (int x : v4)
        cout << x << " ";
    cout << endl;
    
    // 5. Initializing from another vector :
    vector<int> v5{10, 20, 30};
    vector<int> v6(v5.begin(), v5.end());

    cout << v6.at(1) << endl;

    return 0;
}