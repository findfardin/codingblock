#include<bits/stdc++.h>
using namespace std;
void  subsequenceHelper(int idx,string s,string &str,vector<string>&ans){
    if(idx >= s.size()){
        ans.push_back(str);
        return;
    }
    str.push_back(s[idx]);
    subsequenceHelper(idx+1,s,str,ans);
    str.pop_back();
    subsequenceHelper(idx+1,s,str,ans);
}
vector<string>subsequence(string s){
    vector<string>ans;
    string str;
    subsequenceHelper(0,s,str,ans);
    return ans;
}
int main(){
    string s;
    cin >>s;
    vector<string>ans = subsequence(s);
    for(auto i:ans) cout<<i<< endl;
}