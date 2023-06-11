#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> hashSet;

    for (int element: arr) {
        hashSet.insert(element);
    }

    int longestStreak = 0;

    for (int element: arr) {
        if (!hashSet.count(element - 1)) {
            int currentNum = element;
            int currentStreak = 1;

            while (hashSet.count(currentNum + 1)) {
                currentNum += 1;
                currentStreak += 1;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}
