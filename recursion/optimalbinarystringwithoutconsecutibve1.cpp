#include<bits/stdc++.h>
using namespace std;
int countstrings(int n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    int ans = countstrings(n-1) + countstrings(n-2);
    return ans;
}
void generate(int n,string &v,vector<string>&ans){
    if(n == 0 || n == 1){
        ans.push_back(v);
        return;
    }
    v.push_back('0');

    generate(n-1,v,ans);
    v.pop_back();

    // v.push_back('0');
    v.push_back('1');

    generate(n-2,v,ans);
    v.pop_back();
}
int main(){
    int n;
    cin >>n;
    cout << countstrings(n)<<endl;
    vector<string>ans;
    string v;
    generate(n,v,ans);
    for(auto i:ans){
        for(auto j:i) cout<< j;
        cout <<endl;

    }
}