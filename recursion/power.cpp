#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b == 0) return 1;
    int ans = power(a,b-1);
    return ans*a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}