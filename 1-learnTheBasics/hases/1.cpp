#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // pre storing
    // int hash[n + 1] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }

    // // display

    // int s;
    // cin >> s;

    // cout << hash[s];

    /////////////////////////hasing with map /////////////////////////////////////

    // pre compute
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // display

    for (int i = 0; i < n; i++)
    {
        cout << mpp[i] << endl;
    }

    return 0;
}
