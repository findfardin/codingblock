#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v){
    for(int i = 0; i < v.size(); i++) cout <<v[i]<<" ";
}
void reverseRec(vector<int>&v,int s,int e){
    if(s >= e) return;
    reverseRec(v,s+1,e-1);
    swap(v[s],v[e]);
}
int main(){
        int n;
        cin >>n;
        vector<int>v(n);
        for(int i = 0; i < n;i++) cin >>v[i];
        reverseRec(v,0,n-1);
        print(v);

}