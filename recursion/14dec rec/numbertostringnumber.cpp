#include<bits/stdc++.h>
using namespace std;
void convert(string s,string map[],int n){
    if(n < 0) return;
    convert(s,map,n-1);
    cout <<map[s[n]-'0']<<" ";
}
int main(){
    string s;
    cin >> s;
    string map[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n = s.size();
    convert(s,map,n-1);
}