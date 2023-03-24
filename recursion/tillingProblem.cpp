//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long numberHelper(long long N,vector<long long>&dp,long long m){
        if(N <= 0) return 0;
        if(N == 1) return 1;
        if(N == 2) return 2;
        if(dp[N] != -1) return dp[N];
        long long a = (N%m-1%m+m)%m;
        long long b = (N%m-2%m+m)%m;
        return dp[N] = (numberHelper(a,dp,m)%m + numberHelper(b,dp,m)%m)%m;
    }
    long long numberOfWays(long long N) {
        //code here
        vector<long long>dp(N+1,-1);
        long long m = 1000000007;
        long long ans = numberHelper(N,dp,m);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}
// } Driver Code Ends