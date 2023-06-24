#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long left[n] = {0};
    long right[n] = {0};
    long fill[n] = {0};
    long ans = 0;
    left[0] = arr[0];

    for (long i = 1; i < n; i++)
        left[i] = max(left[i-1],arr[i]);

    right[n-1] = arr[n-1];

    for (long i = n - 2 ; i >= 0; i--)
        right[i] = max(right[i+1],arr[i]);

    for(long i = 0 ; i < n ; i++)
        fill[i] = min(left[i],right[i]) - arr[i];

    for(long i = 0 ; i < n ; i++)
        ans += fill[i]; 

    return ans;
}
