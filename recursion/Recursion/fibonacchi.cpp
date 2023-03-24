#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fibo(int n,vector<ll>&dp){    
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n]!= -1) return dp[n];
    return dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
}
int main(){
    int n;
    cin >>n;
    vector<ll>dp(n+1,-1);
    cout << fibo(n,dp);
}