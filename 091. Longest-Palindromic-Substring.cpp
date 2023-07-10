string check(string s,int left,int right){
    int n = s.length();

    while(left >= 0 && right < n){
        if(s[left] != s[right])
            break; 
        
        left--; 
        right++;
    }
    
    return s.substr(left+1, right-left-1);
}

string longestPalinSubstring(string str){
    int n = str.size();
    string longest;

    for(int i=0; i<n; i++){
        string odd = check(str, i, i);

        if(odd.size() > longest.size()) 
            longest = odd;
    }
    
    for(int i=0; i<n; i++){
        string even = check(str, i, i+1);

        if(even.size() > longest.size()) 
            longest = even;
    }
    
    return longest;
}
