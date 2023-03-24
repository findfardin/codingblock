#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&v,int s,int e){
    int mid = (s+e)/2;
    int count  = 0;
    vector<int>ans;
    int i = s, j = mid+1;
    while(i <= mid && j <= e){
        if(v[i] < v[j]){
             ans.push_back(v[i++]);
        }
        else{
        ans.push_back(v[j++]);
        count += (mid - i+1);//finding all combinations in each part of array 
        }
    }
    while(i <= mid) ans.push_back(v[i++]);
    while(j <= e) ans.push_back(v[j++]);
    int k = 0;
    for(int i =s; i <= e;i++,k++) v[i] = ans[k];
    int totalnumber = 0;
    for(int i = s;i <= e;i++){

    }
    return count;
    
}
int mergesort(vector<int>&v,int s,int e){
    if(s >= e) return 0;
    int mid = (s+e)/2;
    int left = mergesort(v,s,mid);
    int right = mergesort(v,mid+1,e);
    int m = merge(v,s,e);
    return m + left + right;
}
int inversioncount(vector<int>&v,int s,int e){
    int ans = mergesort(v,s,e);
    return ans;
}
int main(){
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i =0 ;i < n; i++ ) cin >>v[i];
    int ans = inversioncount(v,0,n-1);
    cout <<ans;
}