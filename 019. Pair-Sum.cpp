#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> pairs;
   sort(arr.begin(),arr.end());

   for(int i=0;i<arr.size();i++){
      for(int j=i+1;j<arr.size();j++){
         if(arr[i] + arr[j] == s)
            pairs.push_back({arr[i],arr[j]});
      }
   }
   
   return pairs;
}
