#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     string n;
//     cin >> n;

//     // pre storing
//     int hash[26] = {0};
//     for (int i = 0; i < n.size(); i++)
//     {
//         hash[n[i] - 'a'] += 1;
//     }

//     char c;
//     cin >> c;
//     cout << hash[c - 'a'];

//     return 0;
// }

int main()
{

    string c;

    cin >> c;

    // prestoring

    map<char, int> mps;

    // for (int i = 0; i < c.size(); i++)
    // {
    //     mps[c[i]]++;
    // }

    for (char ch : c) {
        mps[ch]++;
    }

    // for(auto it : mps) {
    //     cout << it.first;
    // }

    // display

    char d;
    cin >> d;

    cout << mps[d];

    return 0;
}
