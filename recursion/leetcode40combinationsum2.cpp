
#include<bits/stdc++.h>
using namespace std;
void combinationSum2(int idx,vector<int> &candidates,int target,vector<int> &v,vector<vector<int>>&ans){
    if(target == 0){
        ans.push_back(v);
        return;
    }
    if(idx >= candidates.size() || target < 0) return;
    v.push_back(candidates[idx]);
    combinationSum2(idx+1,candidates,target-candidates[idx],v,ans);
    v.pop_back();
    combinationSum2(idx+1,candidates,target,v,ans);

}
vector<vector<int>> combinationSum2(vector<int> &candidates,int target){
        vector<vector<int>>ans;
        vector<int>v;
        int idx = 0;
        combinationSum2(idx,candidates,target,v,ans);
        return ans;
}
int main(){
    int n,target;
    cin >>n>>target;
    vector<int>v(n);
    for(int i = 0;i < n; i++) cin >>v[i];
    vector<vector<int>>ans = combinationSum2(v,target);
    for(auto i:ans){
        for(auto j:i) cout <<j<<" ";
        cout <<endl;
    }
}