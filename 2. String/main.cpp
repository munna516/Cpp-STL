#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Declare & initialize a string
    string s = {"Bangladesh"};
    s.pop_back();
    cout << s << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;
    s += 'h';
    cout << s << endl;
    // s.clear();
    if (s.empty())
        cout << "String Is Empty" << endl;
    else
        cout << "String is Not Empty" << endl;
    cout << s.size() << endl;

    for (auto a : s)
        cout << a << " ";
    cout << endl;
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
    sort(s.begin(), s.end());
    cout << s << endl;
    int size = unique(s.begin(), s.end()) - s.begin();
    for (int i = 0; i < size; i++)
        cout << s[i] << " ";
    cout << endl;
    string s1 = "12345";
    int a = stoi(s1);
    cout << a++ << " " << a << endl;

    int b = 197733;
    string s2 = to_string(b);
    cout << s2 << endl;

    return 0;
}

// isspace
// isupper
// islower
// toupper
// tolower
// back inserter
// s.find()