#include<bits/stdc++.h>
using namespace std;
int convertrec(string s,int n){
    if(n < 0) return 0;
    return (convertrec(s,n-1)*10 + (s[n]-'0'));
}
int main(){
    string s;
    cin >>s;
    int n = s.size();
    cout << convertrec(s,n-1);
}