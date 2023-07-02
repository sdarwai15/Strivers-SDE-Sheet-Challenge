#include<bits/stdc++.h>

void subsetSumsHelper(int ind, vector<int>& arr, int n, vector<int>& ans, int sum) {
    if (ind == n) {
    	ans.push_back(sum);
        return;
    }

	  subsetSumsHelper(ind + 1, arr, n, ans, sum + arr[ind]);
    subsetSumsHelper(ind + 1, arr, n, ans, sum);
    
    return;
}

vector<int> subsetSum(vector<int> &num){
	  vector<int> ans;
    
    subsetSumsHelper(0, num, num.size(), ans, 0);
    sort(ans.begin(), ans.end());
    
    return ans;	
}
