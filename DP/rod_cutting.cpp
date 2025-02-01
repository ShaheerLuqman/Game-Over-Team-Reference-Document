int cutRodRecur(int i, vector<int> &price) {
    if (i==0) return 0;  
    int ans = 0;    
    // Find maximum value for each cut.
    // Take value of rod of length j, and 
    // recursively find value of rod of 
    // length (i-j).
    for (int j=1; j<=i; j++) {
        ans = max(ans, price[j-1]+cutRodRecur(i-j, price)); return ans;
    }
