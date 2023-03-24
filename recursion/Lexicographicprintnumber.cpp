#include<bits/stdc++.h>
using namespace std;
void lexicographprint(int idx,int n){
    if(idx > n) return ;
    cout << idx<<endl;
    for(int i = 0;i <= 9;i++){
        lexicographprint(idx*10+i,n);
    }
    
}
int main(){
    int n;
    cin >>n;
    for(int i = 1;i <= 9;i++) lexicographprint(i,n);
}