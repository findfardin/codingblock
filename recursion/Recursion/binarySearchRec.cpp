#include<bits/stdc++.h>
using namespace std;
int binarySearchRec(vector<int>v,int s,int e,int target){
    int mid = (s + e)/2;
    if(v[mid] == target) return mid;
    else if(v[mid] < target) return binarySearchRec(v,mid+1,e,target);
    else return binarySearchRec(v,s,mid-1,target);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >>v[i];
    int target;
    cin >>target;
    cout << binarySearchRec(v,0,n-1,target);
}