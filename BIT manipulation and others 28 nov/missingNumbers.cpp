#include<bits/stdc++.h>
using namespace std;
 int MissingNumber(vector<int>& array, int n) {
        
        // Your code goes here
        int xox = 0;
        for(int i=  1; i <= n;i++){
            xox = xox^i;
        }
        for(int i = 0;i < array.size();i++){
            xox = xox^array[i];
        }
        return xox;
    }
int main(){
	int n; 
	cin >>n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >>v[i];
    cout << MissingNumber(v,n);
}