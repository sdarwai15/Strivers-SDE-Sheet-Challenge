#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count = 0;
    int element;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            count = 1;
            element = arr[i];
        }
        else if (element == arr[i])
			count++;
        else count--;
    }

    int count1 = 0;

    for (int i = 0; i < n; i++) 
        if (arr[i] == element)
			count1++;

    if (count1 > (n / 2))
		return element;

    return -1;
}
