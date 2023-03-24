#include<bits/stdc++.h>
using namespace std;
int combination(vector<int>v,int n,int target){
    if(n == 0) return 0;
    int ans = combination(v.begin()+1,n-1,target);
    int count = 0,first = 0;
    for(int i = 0; i  < 5550;i++){
        first += 2;
        if(two == target){
             count++;
             break;
        }else if(two > target) break;
    }
    
}   
int main(){
int n;
cin >>n;
vector<int>v(n);
int target;
cin >> target;
for(int i =0; i <n; i++) cin >>v[i];
combination(v,n,target);
}