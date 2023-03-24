#include<bits/stdc++.h>
using namespace std;
int linearSearchRec(vector<int>v,int n, int target){
    if(n == 0) return -1;
    if(v[n] == target) return n;
    int ans = linearSearchRec(v,n-1,target);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >>v[i];
    int target;
    cin >>target;
    cout << linearSearchRec(v,n-1,target);
}