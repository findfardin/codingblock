#include<bits/stdc++.h>
using namespace std;
void generatevalidparenthesis(int open,int close,string &s,vector<string>&ans,int n){
    if(open == n && close == n) {
        ans.push_back(s);
        return;
    }
    if(open < n){
    s.push_back('(');
    generatevalidparenthesis(open+1,close,s,ans,n);
    s.pop_back();
    }
    if(close < open){
    s.push_back(')');
    generatevalidparenthesis(open,close+1,s,ans,n);
    s.pop_back();
    
    }
}
vector<string> generate(int n){
    string s;
    vector<string>ans;
    generatevalidparenthesis(0,0,s,ans,n);
    return ans;
}
int main(){
    int n;
    cin >>n;
    vector<string>ans = generate(n);
    for(auto i:ans) cout <<i<<endl;
}