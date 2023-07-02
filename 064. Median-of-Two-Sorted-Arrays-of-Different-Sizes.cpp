double median(vector<int>& a, vector<int>& b) {
  int n1 = a.size(), n2 = b.size();

	if(n2<n1)
		return median(b,a);

  int s = 0,e = n1;

  while(s<=e){
        int i1 = (s+e) >> 1;
        int i2 = (n1+n2+1)/2 - i1;
        int mx1 = i1 == 0 ? INT_MIN : a[i1-1];
        int mx2 = i2 == 0 ? INT_MIN : b[i2-1];
        int mn1 = i1 == n1 ? INT_MAX : a[i1];
        int mn2 = i2 == n2 ? INT_MAX : b[i2];

        if(mx1<=mn2 && mx2<=mn1){
            if((n1+n2)%2 == 0)
				      return (max(mx1,mx2)+min(mn1,mn2))/2.0;
            else
				      return max(mx1,mx2);
        } else if(mx1>mn2){
			      e = i1-1;
        } else {
          s = i1+1;
        }
  }
    
	return 0.0;
}
