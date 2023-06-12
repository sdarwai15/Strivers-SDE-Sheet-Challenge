#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x) {
    int n = arr.size();
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        int xx = xr ^ x;
        cnt += mpp[xx];
        mpp[xr]++;
    }

    return cnt;
}
