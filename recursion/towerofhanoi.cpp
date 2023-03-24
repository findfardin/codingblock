#include<bits/stdc++.h>
using namespace std;
int towerofhanoi(string src, string help, string dest,int n){
    if(n == 1) {
        cout <<"Move "<<n<<"th "<<"disc "<<"from "<<src << " to "<<dest<<endl;
        return 1;   
    }
    int ans1 = towerofhanoi(src,dest,help,n-1);
    cout <<"Move "<<n<<"th "<<"disc "<<"from "<<src << " to "<<dest<<endl;
    int ans2 = towerofhanoi(help,src,dest,n-1);
    return ans1 + ans2 + 1;
}
int main(){
    int n;
    cin >>n;
    int ans = towerofhanoi("A","B","C",n);
    cout << ans;
}