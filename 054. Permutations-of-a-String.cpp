#include <bits/stdc++.h> 

void recurPermute(int index, string& s, vector<string>& ans) {
      if (index == s.length()) {
        ans.push_back(s);
        return;
      }

      for (int i = index; i < s.length(); i++) {
        swap(s[index], s[i]);
        recurPermute(index + 1, s, ans);
        swap(s[index], s[i]);
      }
}

vector<string> findPermutations(string &s) {
    vector<string> ans;
    
    recurPermute(0, s, ans);
    
    return ans;
}
