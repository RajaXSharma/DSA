#include <bits/stdc++.h>
using namespace std;

void showHighLowFreq(int arr[], int n)
{
    unordered_map<int, int> freqMap;
    for (int i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
    }

    int lowFreq = n, highFreq = 0;
    int lowElem = 0, HighElem = 0;

    for (auto it : freqMap)
    {
        int element = it.first;
        int frequency = it.second;

        if (frequency < lowFreq)
        {
            lowElem = element;
            lowFreq = frequency;
        }

        if (frequency > highFreq)
        {
            HighElem = element;
            highFreq = frequency;
        }
    }

    cout << HighElem << "-" << highFreq << endl;
    cout << lowElem << "-" << lowFreq;
}

int main()
{

    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    showHighLowFreq(arr, n);

    return 0;
}