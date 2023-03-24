#include<bits/stdc++.h>
using namespace std;
void combinationSumHelper(int idx,vector<vector<int>>&ans,vector<int>&v,vector<int>&candidates,int target){
    if(target == 0){
        ans.push_back(v);
        return;
    }
    if(target < 0) return;
    if(idx >= candidates.size()) return;

    v.push_back(candidates[idx]);
    combinationSumHelper(idx,ans,v,candidates,target - candidates[idx]);
    v.pop_back();
    combinationSumHelper(idx+1,ans,v,candidates,target);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        int idx = 0;
        combinationSumHelper(idx,ans,v,candidates,target);
        return ans;
    }
int main(){
    int n,target;
    cin >>n>> target;
    vector<int>v(n);
    for(int i = 0;i <v.size();i++) cin>>v[i];
    vector<vector<int>>ans = combinationSum(v,target);
    for(auto i:ans){
        for(auto j:i) cout <<j<<" ";
        cout <<endl;
    }
}