#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n) {
    long long maximum = LONG_MIN;
    long long overallSum = 0;

    for (int i = 0; i < n; i++) {
        overallSum += arr[i];

        if (overallSum > maximum) 
            maximum = overallSum;

        if (overallSum < 0)
            overallSum = 0;
    }

    if(maximum < 0)
        return 0;

    return maximum;
}
