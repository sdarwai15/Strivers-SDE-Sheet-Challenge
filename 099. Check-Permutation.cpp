#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    vector<int> a(26,0);

    if(str1.length()!=str2.length()) 
        return false;

    for(int i=0;i<str1.length();i++){
        a[str1[i]-'a']++;
        a[str2[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(a[i]!=0) return false;
    }

    return true;
}
