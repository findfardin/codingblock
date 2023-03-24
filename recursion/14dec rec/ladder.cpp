#include<bits/stdc++.h>
using namespace std;
int ladder(int n){
    if(n < 0) return 0;
    if(n == 0 || n == 1) return 1;
    if(n == 2) return 2;
    int op1 = ladder(n-1);
    int op2 = ladder(n-2);
    int op3 = ladder(n-3);
    return op1 + op2 + op3; 
}
int laddermemoized(int n,vector<int>&dp){
    if(n < 0) return 0;
    if(n == 0 || n == 1) return 1;
    if(n == 2) return 2;
    if(dp[n] != -1) return dp[n];
    int op1 = laddermemoized(n-1,dp);
    int op2 = laddermemoized(n-2,dp);
    int op3 = laddermemoized(n-3,dp);
    return dp[n] = op1+op2+op3;
}
int ladderiterative(int n){
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i <= n;i++)  dp[i] = dp[i-1] + dp[i-2]+dp[i-3];
    return dp[n];
}
int kthladderrec(int n,int k){
   if(n < 0) return 0;
   if(n == 0 || n == 1) return 1;
   if(n == 2) return 2;
   
   int ans = 0;
   for(int i = 1;i <= k;i++) ans += kthladderrec(n-i,k);
   return ans;
   
}
int kthladderrecmemoized(int n,int k,vector<int>&dp2){
   if(n < 0) return 0;
   if(n == 0 || n == 1) return 1;
   if(n == 2) return 2;
    int op = 0;
    if(dp2[n] != -1) return dp2[n];
   for(int i = 1;i <= k;i++){
    op+= kthladderrecmemoized(n-i,k,dp2);
    dp2[n] = op;
   } 
   return dp2[n];


}
int kthladderiterative(int n,int k){
    vector<int>dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    int ans = 0;
    for(int i = 3;i <= n;i++){
        for(int j = 1;j <= k;j++){
            if(n-j >= 0) dp[i]+= dp[i-j];
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout << ladder(n)<<endl;
    vector<int>dp(n+1,-1);
    cout << laddermemoized(n,dp)<<endl;
    cout << ladderiterative(n)<<endl;
    int k = 3;
    cout <<kthladderrec(n,k)<<endl;
    vector<int>dp2(n+1,-1);
    cout <<kthladderrecmemoized(n,k,dp2)<<endl;
    cout <<kthladderiterative(n,k)<<endl;
}
