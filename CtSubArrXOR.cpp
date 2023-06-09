#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int m)
{
    int n = arr.size();
    unordered_map <int, int> HashTable;
    HashTable[0] = 1;
    int count = 0, curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum ^= arr[i];
        if (HashTable[curSum ^ m] > 0)
            count += HashTable[curSum ^ m];
        HashTable[curSum]++;
    }
    return(count);
}